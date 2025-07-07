#include "HX711.h"
#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DT 4     // HX711 DOUT
#define SCK 5    // HX711 SCK

// HX711 Setup
HX711 scale;

// LCD Setup
LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27

// WiFi/Hotspot Credentials
const char* ssid = "Wokwi-GUEST";
const char* password = "";

// MQTT Cloud Simul Connection
const char* mqtt_server = "broker.hivemq.com";
const char* topic = "iot/lt/loadmonitor";

// Min-Max Thresholds (Set as needed)
float maxWeight = 100.0;
float minWeight = 10.0;

// Clients
WiFiClient espClient;
PubSubClient client(espClient);

//Functions//

void setup_wifi() {
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Connecting to MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      delay(3000);
    }
  }
}

void sendMQTTAlert(String message) {
  Serial.println("Publishing MQTT alert: " + message);
  client.publish(topic, message.c_str());
}


void setup() {
  Serial.begin(115200);
  Serial.println("Setup started");
  // LCD Init
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Weight Monitor");

  // HX711 Init
  scale.begin(DT, SCK);
  scale.set_scale();  // Adjust for your load cell
  scale.tare();       // Reset scale to 0

  // WiFi + MQTT Init
  setup_wifi();
  client.setServer(mqtt_server, 1883);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  float weight = scale.get_units(10);
  Serial.print("Weight: ");
  Serial.print(weight);
  Serial.println(" kg");

  // Display weight on LCD
  lcd.setCursor(0, 0);
  lcd.print("Wt: ");
  lcd.print(weight, 1);
  lcd.print("kg     ");

  // Decide alert/status
  lcd.setCursor(0, 1);  // Always update line 2

  if (weight > maxWeight) {
    sendMQTTAlert("Overload: " + String(weight) + "kg");
    lcd.print("Status: OVERLOAD ");
  } else if (weight < minWeight) {
    sendMQTTAlert("Underload: " + String(weight) + "kg");
    lcd.print("Status: UNDERLOAD");
  } else {
    lcd.print("Status: NORMAL   ");
  }

  delay(3000);
}

