//**********************************************************************************
/*
Codigo para receber o codigo do controle.
Versão depreciada refazer com a versão mais recente
Existe limitações como o tempo de comando e não são continuos
*/
#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(100);
}
//**********************************************************************************
