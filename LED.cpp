#define LED1 25
#define LED2 33
#define LED3 26

#include "Arduino.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  /*ledcAttachPin(LED12, PWM1_Ch);
  ledcSetup(PWM1_Ch, PWM1_Freq, PWM1_Res);
  ledcAttachPin(LED3, PWM2_Ch);
  ledcSetup(PWM2_Ch, PWM2_Freq, PWM2_Res);*/
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // 0.0V to 3.3V
 
  for (int i = 0; i < 360; i++){
    double radians = i * PI / 180;
    double output = (sin(radians)+1) * 0.5; // 0V to 1V
    double Value = output* 255; // 0 to 3.3

    dacWrite(LED1, Value);
    delay(1);
  }

  for (int i = 0; i < 360; i++){
    double radians = i * PI / 180;
    double output = (sin(radians)+1) * 0.5; // 0V to 1V
    double Value = output* 255; // 0 to 3.3

    digitalWrite(LED2, Value);
    delay(1);
  }


  for (int i = 0; i < 360; i++){
    double radians = i * PI / 180;
    double output = (sin(radians)+1) * 0.5; // 0V to 1V
    double Value = output* 255; // 0 to 3.3

    dacWrite(LED3, Value);
    delay(1);
  }
}
