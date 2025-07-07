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

# Hardware:
1. HX711 Module-	Analog-to-digital converter to read load cell data (weight)
2. Load Cell-	Sensor to measure weight placed on platform
3. ESP32-	Microcontroller with Wi-Fi capability
4. I2C LCD display (16X2)-	Displays weight and alert messages
5. Wires-	Circuit connection
6. Power Supply	5V- for powering the microcontroller

# Software:
1. Arduino IDE-	Programming ESP32 and Debugging
2. Wokwi Simulator-	Circuit Simulation and testing
3. HX711 Library-	For interfacing with the load cell sensor
4. LiquidCrystal_I2C Library-	For handling LCD display output
5. PubSubClient Library-	For MQTT-based cloud communication
6. MQTT- 	Cloud connection via WiFi for real-time alerts 
7. GitHub-	Documentation of code & files

# Cloud Platforms & IoT Services:
1. Google FireBase Realtime Dashboard-	Optional integration for logging weight values, viewing historical data, and building mobile or web dashboards.
2. Blynk IoT-	Creates custom mobile apps to remotely monitor weight and receive push notifications when thresholds are crossed.
3. HiveMQ (MQTT Broker)-	For real-time weight data transmission and alert messaging over the MQTT protocol. Free and public for testing.
4. WiFi/ Hotspot-	Enables ESP32 to connect to the internet (e.g., using Wokwi-GUEST or mobile hotspot credentials)
