//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Define the relay pins
#define relay1 D0
#define relay2 D1
#define relay3 D2
#define relay4 D3
#define relay5 D5
#define relay6 D6
#define relay7 D7
#define relay8 D8

#define BLYNK_TEMPLATE_ID "Your Template Id"
#define BLYNK_DEVICE_NAME "Your Device Name"
#define BLYNK_AUTH_TOKEN "Your Token"


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "sinyo";//Enter your WIFI name
char pass[] = "sukasukasaya";//Enter your WIFI password

//Get the button values
BLYNK_WRITE(V1) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value1 == 1) {
    digitalWrite(relay1, LOW);
     Serial.println("Relay 1 LOW");
  } else {
    digitalWrite(relay1, HIGH);
    Serial.println("relay 1 HIGH");
  }
}

//Get the button values
BLYNK_WRITE(V2) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay2, LOW);
    Serial.println("relay 2 LOW");
  } else {
    digitalWrite(relay2, HIGH);
    Serial.println("relay 2 HIGH");
  }
}

//Get the button values
BLYNK_WRITE(V3) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay3, LOW);
    Serial.println("relay 3 LOW");
  } else {
    digitalWrite(relay3, HIGH);
    Serial.println("relay 3 HIGH");
  }
}

//Get the button values
BLYNK_WRITE(V4) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay4, LOW);
    Serial.println("relay 4 LOW");
  } else {
    digitalWrite(relay4, HIGH);
    Serial.println("relay 4 HIGH");
  }
}

//Get the button values
BLYNK_WRITE(V5) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay5, HIGH);
    Serial.println("relay 5 HIGH");
  } else {
    digitalWrite(relay5, LOW);
    Serial.println("relay 5 LOW");
  }
}
//Get the button values
BLYNK_WRITE(V6) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay6, HIGH);
    Serial.println("relay 6 HIGH");
  } else {
    digitalWrite(relay6, LOW);
    Serial.println("relay 6 LOW");
  }
}
//Get the button values
BLYNK_WRITE(V7) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay7, HIGH);
    Serial.println("relay 7 HIGH");
  } else {
    digitalWrite(relay7, LOW);
    Serial.println("relay 7 LOW");
  }
}
//Get the button values
BLYNK_WRITE(V8) {
  bool value2 = param.asInt();
  // Check these values and turn the relay2 ON and OFF
  if (value2 == 1) {
    digitalWrite(relay8, HIGH);
    Serial.println("relay 8 HIGH");
  } else {
    digitalWrite(relay8, LOW);
    Serial.println("relay 8 LOW");
  }
}

void setup() {
  Serial.begin(115200);
  //Set the relay pins as output pins
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);

  // Turn OFF the relay
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, LOW);
  digitalWrite(relay6, LOW);
  digitalWrite(relay7, LOW);
  digitalWrite(relay8, LOW);


  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
