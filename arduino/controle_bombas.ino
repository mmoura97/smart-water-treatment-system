#define pinSensorTanque 11 // estagio 1
#define pinSensorFilt 12 // estagio 2 //filtro
#define pinSensorReserv 13 // estagio 3
#define pinRele1 3 // rele bomba 1
#define pinRele2 4 // rele bomba 2
#define pinRele3 5 // rele bomba 3


bool estadoTanque = HIGH;
bool estadoFilt = HIGH;
bool estadoReserv = HIGH;

void setup() {
}

void loop() {

//lógica das bombas e boias
  estadoTanque = !digitalRead(pinSensorTanque);
  estadoFilt = !digitalRead(pinSensorFilt);
  estadoReserv = !digitalRead(pinSensorReserv);

  if (estadoTanque == HIGH) {
    digitalWrite(pinRele1, HIGH);
  }else if (estadoTanque == LOW){
    digitalWrite(pinRele1, LOW);
  }

  if (estadoFilt == HIGH){
    digitalWrite(pinRele2, HIGH);
  }else if(estadoFilt == LOW){
    digitalWrite(pinRele2, LOW);
  }

  if (estadoReserv == HIGH){
    digitalWrite(pinRele3, HIGH);
  }else if(estadoReserv == LOW){
    digitalWrite(pinRele3, LOW); //boias e bombas
  }
  
}