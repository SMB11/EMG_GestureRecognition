#include <string.h>

const int biosignalPin1 = A0;
const int biosignalPin2 = A1;
const int biosignalPin3 = A2;
const int biosignalPin4 = A3;
const int bufferSize = 1024;


void setup() {
  Serial.begin(230400);
}

void loop() {
//   Serial.println("Enter a number:");
//      while (!Serial.available()){}

//   if (!Serial.available() == 0) {
// //  number =Serial.read();
//   number = Serial.parseInt();

// }
//   // while (!Serial.available()){}
//   // number = Serial.parseInt();
//   Serial.println(number);

    int channel1 = analogRead(biosignalPin1);
    int channel2 = analogRead(biosignalPin2);
    int channel3 = analogRead(biosignalPin3);
    int channel4 = analogRead(biosignalPin4);


      Serial.print(channel1);
      Serial.print(",");
      Serial.print(channel2);
      Serial.print(",");
      Serial.print(channel3);
      Serial.print(",");
      Serial.println(channel4);


delay(10);
}
