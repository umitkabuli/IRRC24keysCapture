#include <IRremote.h>

IRrecv IR(7);

void setup() {
  IR.enableIRIn();
  Serial.begin(9600);
}

void loop() {
  if(IR.decode()) {
    Serial.println(IR.decodedIRData.decodedRawData, HEX);
    delay(1500);
    IR.resume();
  }
}
