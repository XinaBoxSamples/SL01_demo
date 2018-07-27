#include <xCore.h> //find @ https://github.com/xinabox/xCore
#include <xOD01.h> //find @ https://github.com/xinabox/xOD01
#include <ESP8266WiFi.h>
#include "TIMER_CTRL.h"
#include <xSL01.h> //find @ https://github.com/xinabox/xSL01

xSL01 SL01;

unsigned long currentMilli = 0;
int ledID = 0;

bool fade_flag1 = true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;

//Create variables to store the light data read from the SL01
float lux;
float uv;

void setup() {
  // put your setup code here, to run once:
  setup_program();
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
