
/*
 * Simple Connect to Wifi

 */
#include <ESP8266WiFi.h>


#include "config.h"


const char *ssid = WIFI_SSID;
const char *password = WIFI_PASSWORD;

void setup() {
  Serial.begin(115200);
  delay(100);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("Netmask: ");
  Serial.println(WiFi.subnetMask());
  Serial.print("Gateway: ");
  Serial.println(WiFi.gatewayIP());

}

void loop() {
  delay(5000);
  
  Serial.println("Wifi is " + WiFi.isConnected()?"connected":"off");
}
