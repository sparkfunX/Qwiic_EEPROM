/*
  A simple test for our Qwiic EEPROM board.
*/

#include <Wire.h>

#include "SparkFun_External_EEPROM.h" // Click here to get the library: http://librarymanager/All#SparkFun_External_EEPROM
ExternalEEPROM myMem;

const int LED = 13;

void setup()
{
  Serial.begin(115200);
  Serial.println("Qwiic EEPROM Tester");

  pinMode(LED, OUTPUT);

  Wire.begin();
}

void loop()
{
  if (myMem.begin() == true)
  {
    Serial.println("EEPROM Detected");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("Nothing detected!");
    digitalWrite(LED, LOW);
  }
  delay(100);

}
