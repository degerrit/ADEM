# ADEM
The timelab.org A.D.E.M. project enables cyclists to measure dust particles. The measurements are displayed on the device and sent via Wi-Fi to a central data collection server. This git repository hosts the hardware designs and firmware for the mobile sensor prototype.

More information is available from the project's wiki at: http://fabwiki.timelab.org/fabwiki/index.php/A.D.E.M

## Hardware

The project uses the SparkFun Thing. This ESP8266 based Wi-Fi controller development board runs the A.D.E.M. firmware and conveniently hosts a LiPo battery management system that is key in the mobility aspect of this project. Apart from the headers for the SparkFun Thing, the project's printed circuit board has room for a GPS module, temperature and pressure sensors and connections to external parts like the PPD40NS dust sensor.

## Firmware

The firmware is written in Arduino.

## Development

### Add ESP Development to Arduino
Setting up for ESP development in Arduino:

* Get Arduino IDE 1.6.4 or higher from: https://www.arduino.cc/
* **File > Preferences**
  - NL: Bestand > Voorkeuren
* **Additional Board Manager URLs > http://arduino.esp8266.com/stable/package_esp8266com_index.json**
  - NL: Additionele Bordenbeheer URLs > http://arduino.esp8266.com/stable/package_esp8266com_index.json
* Restart the Arduino IDE
* **Tools > Board > Boards Manager > esp8266 by ESP 8266 Community > install**
  - NL: Hulpmiddelen > Board > Bordenbeheer > esp8266 by ESP 8266 Community > install
* **Tools > Board > SparkFun ESP8266 Thing**
  - NL: Hulpmiddelen > Board > SparkFun ESP8266 Thing
* **Tools > Port > /dev/ttyUSB0**
  - NL: Hulpmiddelen > Port > /dev/ttyUSB0

Upload Blink to test:

```arduino
#define ESP8266_LED 5

void setup() 
{
  pinMode(ESP8266_LED, OUTPUT);
}

void loop() 
{
  digitalWrite(ESP8266_LED, HIGH);
  delay(500);
  digitalWrite(ESP8266_LED, LOW);
  delay(500);
}
```

To get faster upload speeds to the SparkFun ESP8266 thing: *Tools > Upload Speed*, a value of 460800 should work. You can even try 921600.

### Add GPS library for Arduino

Download TinyGPS++ from: https://github.com/mikalhart/TinyGPSPlus/archive/master.zip
In the Arduino IDE: **Sketch > Include Library > Add .ZIP Library... > master.zip**

### Configuration file

Create a `config.h` file in the same folder with the following contents, and fill in your Wi-Fi and ThingSpeak credentials.
```arduino
#define WIFISSID "your wifi network name"
#define WIFIPW "your wifi network password"
#define THINGADDR "api.thingspeak.com"
#define THINGKEY "your thingspeak API key"
#define DEBUGADDR ""
```

Restart the Arduino IDE, you will see that `config.h` is opened in a second tab in the Arduino IDE
