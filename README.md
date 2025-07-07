# Smart-Load-Monitoring-System
IOT based weight monitoring system using HX711 and ESP32 in Wokwi Simulation

# Aim
To develop a Smart Load Monitoring System using an HX711 weight sensor module that continuously monitors weight in real-time and sends real-time alerts to warehouse staff via the cloud platform whenever the load exceeds or drops below predefined thresholds which indicates overloading or material depletion.

# Problem Statement
In industrial warehouses and manufacturing facilities, effectively managing and monitoring inventory and loads is critical for achieving reliable and safe operations in terms of resources. 
Existing systems for monitoring loads often rely on manual checks or older versions that are prone to human errors, extended delays in reaction, and a lack of real-time monitoring. This can lead to uncertainty associated with equipment overloads, material depletion, unsafe conditions and production delays leading to higher operating costs and low productivity.
The goal of this project is to develop and demonstrate a Smart Load Monitoring System based on IoT concepts that will automatically and continuously measure weights of materials that are placed on a platform via the use of an HX711 weight sensor module. 
This system is expected to communicate weight data in real-time, analyze it against set upper and lower values, and notify users alerted to any exceeding of limit values to a cloud-based service. 
This form of alerts will facilitate knowledge associated with issues such as overloading (which may lead to damage of storage racks or machinery) and material depletion causing a work stoppage in the production or dispatch processes.
By incorporating a Wi-Fi capable microcontroller using ESP32 this load monitoring system will utilize cloud-based services like (Firebase, Blynk, MQTT etc.) to generate alert notifications to warehouse personnel. 

# Solution Scope
• Real-time, automated weight monitoring
• Alert thresholds set to prevent overloads and underload
• Cloud notification system (email, dashboard or mobile notifications)
• Scalable across multiple warehouse objects or platforms
• Integrated monitoring and analytics in cloud platform.

# Applications IRL
1. Warehouse Inventory Automation (Amazon, Flipkart, Costco, DMart, Target)
2. Smart Restocking in Retail (Reliance Retail, More, Big Bazaar)
3. Production Material Tracking (L&T, Tata, MSMEs, Etsy sellers)
4. Industrial Load Safety Monitoring (Bharat Forge, Tata Steel, JSW)
5. Smart Farming & Grain Storage (ITC Agri, Godrej Agrovet, small farmers)
6. Cold Chain & Logistics (Amazon Fresh, BigBasket, Zomato Warehouse)

# Required Components

#Hardware:
1. ESP32 Microcontroller
2. HX711 ADC Module
3. Load Cell Sensor
4. I2C 16x2 LCD Display (0x27)
5. Breadboard + Jumper Wires
6. USB Power Supply / 5V Supply

#Software:
1. Arduino IDE
2. Wokwi Online Simulator
3. HX711 Library
4. LiquidCrystal_I2C Library
5. PubSubClient Library

#Cloud Platforms & IoT Services:
1. HiveMQ MQTT Broker (for messaging , free and public for testing)
2. Firebase Realtime Database (future expansion)
3. Blynk IoT (mobile alert app)
4. Wi-Fi/Hotspot (ESP32 internet access)

# Flowchart
![Code Flowchart](https://github.com/user-attachments/assets/ecf6c360-c17d-4633-b9f1-894e037a36bc)

# How It Works
ESP32 reads weight from HX711 module -> Displays live weight on I2C LCD -> Compares with min and max thresholds -> If weight is out of range, sends MQTT alert -> Repeats every 3 seconds

# Wokwi Simulation Circuit
Diagram created and tested on Wokwi
https://wokwi.com/projects/435803709667624961 

# Code
Main Arduino file: sketch.ino

# Demo Video
https://drive.google.com/file/d/1bi9xZkOrSt18PDriAw8p2L-XDTdymnXy/view?usp=sharing 

# Future Enhancements
Integrate Firebase for historical logging, 
Use Blynk IoT for mobile push alerts, 
Add AI-based weight anomaly detection, 
Expand to LoRa/GSM modules for rural areas

# Author
Ananya Karmakar | Course: Industrial IoT & Architecture | Project by: L&T EduTech College Connect
