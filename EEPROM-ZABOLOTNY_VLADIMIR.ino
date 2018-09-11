#include <EEPROM.h>

int direccion=0;
byte Val1; 
byte Val2; 

void Setup() {
Serial.begin(9600);
byte informacion=B11001;
int valor=analogRead(0);
EEPROM.write(direccion, informacion);
EEPROM.write(direccion+1,valor);
}

void loop() {
EEPROM.read(direccion);
EEPROM.read(direccion+1);

Serial.print("En la dirección esta:");
Serial.print(direccion);
Serial.print("Se encuentra");
Serial.print(Val1, DEC);
}
