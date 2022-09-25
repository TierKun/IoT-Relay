# IoT-Relay
IoT Relay with NodeMcu, Controllable by App, ChatBot, Google Assistant 

<p align="center">
  <img src="https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E" />
  <img src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/node.js%20-%2343853D.svg?&style=for-the-badge&logo=node.js&logoColor=white" />
  <img src="https://img.shields.io/badge/NPM-%23000000.svg?style=for-the-badge&logo=npm&logoColor=white" />
</p>

---------

### Hardware & Software 

- NodeMcu ESP8266
- NodeMcu Shield (optional)
- Relay 4/8ch
- Blynk IoT Apps : [`Android`](https://play.google.com/store/apps/details?id=cloud.blynk`) [`Ios`](https://apps.apple.com/us/app/blynk-iot/id1559317868)
- [`Blynk Cloud`](https://blynk.cloud)
- [`Arduino IDE`](https://www.arduino.cc/en/software)

---------

## Can be integrated with:
<p align="left">
  ➛ <a href="https://github.com/TierKun/Telegram-Bot-IoT">Telegram Bot</a>
</p>
<p align="left">
  ➛ <a href="https://github.com/TierKun/Whatsapp-Bot-IoT">Whatsapp Bot</a>
</p>

---------

### Install Driver & Library

* [`Driver CH34x For NodeMcu lolin`](https://github.com/TierKun/IoT-Relay/blob/main/Driver%20%26%20Library/CH341SER.zip)
* [`Library ESP8266`](https://github.com/TierKun/IoT-Relay/blob/main/Driver%20%26%20Library/ESP8266wifi-master.zip)
* [`Library Blynk`](https://github.com/TierKun/IoT-Relay/blob/main/Driver%20%26%20Library/blynk-library-master.zip)
* [`Driver&Tools Flash Error`](https://github.com/TierKun/IoT-Relay/blob/main/Driver%20%26%20Library/Flash%20NODEmcu.rar)

---------
#### Edit Config Token Server Blynk
<p align="left">
  ‣ <a href="https://github.com/TierKun/IoT-Relay/blob/main/Code/IoT%20Relays.ino#L16-L18">Edit Token Config</a>
</p>

```C++

#define BLYNK_TEMPLATE_ID "ISI_TEMPLATE_ID"
#define BLYNK_DEVICE_NAME "NAMA_DEVICE"
#define BLYNK_AUTH_TOKEN "ISI_TOKEN"

```
---------

#### Edit Wifi Config

<p align="left">
   ‣ <a href="https://github.com/TierKun/IoT-Relay/blob/main/Code/IoT%20Relays.ino#L22-L23">Edit Wifi Config</a>
</p>

```C++

char ssid[] = "sinyo";//Masukkan Nama Wifi/SSID
char pass[] = "sukasukasaya";//Masukkan WIFI password

```

---------
