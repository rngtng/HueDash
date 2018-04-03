#include <WiFi.h>
#include "hueDino.h"
#include "Dash.h"

#include "0_Webserver.h"

int webserver_thread_id;

void webserver_thread(const void *argument) {
  while (true) {
    Webserver.process();
  }
}

void setup() { 
  Dash.begin();
   while (WiFi.begin(ssid, pass) != WL_CONNECTED) {
    Dash.led(L1, (Dash.leds[L1].color + 1) % 8);
    delay(500);
  }
  Webserver.begin();
  webserver_thread_id = os_thread_create(&webserver_thread, NULL, OS_PRIORITY_NORMAL, 1024);
  Dash.all_led(GREEN);  
}


void loop() {
}

