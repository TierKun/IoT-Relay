# IoT-Relay
IoT Relay with NodeMcu, Controllable by App, ChatBot, Google Assistant 

---------

## Required

### Language
<p align="center">
  <img src="https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E" />
  <img src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
</p>
### Enggine
<p align="center">
  <img src="https://img.shields.io/badge/NPM-%23000000.svg?style=for-the-badge&logo=npm&logoColor=white" />
  <img src="https://img.shields.io/badge/node.js%20-%2343853D.svg?&style=for-the-badge&logo=node.js&logoColor=white" />
</p>

### Hardware & Software Used

- NodeMcu ESP8266
- NodeMcu Shield (optional)
- Relay 4/8ch
- Blynk Cloud 

---------

#### Edit Config Token Server Blynk
<p align="left">
  <a href="https://github.com/TierKun/IoT-Relay/blob/main/Code/IoT%20Relays.ino#L16-L18">Edit Token Config</a>
</p>

```C++

#define BLYNK_TEMPLATE_ID "ISI_TEMPLATE_ID"
#define BLYNK_DEVICE_NAME "NAMA_DEVICE"
#define BLYNK_AUTH_TOKEN "ISI_TOKEN"

```
---------

#### Edit Wifi Config

<p align="left">
   <a href="https://github.com/TierKun/IoT-Relay/blob/main/Code/IoT%20Relays.ino#L22-L23">Edit Wifi Config</a>
</p>

```C++

char ssid[] = "sinyo";//Masukkan Nama Wifi/SSID
char pass[] = "sukasukasaya";//Masukkan WIFI password

```

---------
