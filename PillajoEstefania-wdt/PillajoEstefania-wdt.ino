/*
   Universidad Técnica del Norte
   Facultad de Ingeniería en Ciencas Aplicadas
   Carrera de Ingeniería en Electrónica y Redes de Comunicación
   Estefanía Pillajo
   04-02-2020
*/

#include<MsTimer2.h>
#include<avr/wdt.h>

int segundos = 0;
String datos = "";
int inicio = 0;

void setup() {
  wdt_disable();
  MsTimer2::set(1000, reloj);
  MsTimer2::stop();
  Serial.begin(9600);
  Serial.println("INGRESE LA LETRA ");
}

void loop() {

  if (Serial.available() > 0) {
    datos = Serial.readString();
    Serial.println(" ");
  }

  if (datos == "A" && inicio == 1) {
    Serial.println("REINICIO 1S");
    MsTimer2::start();
    wdt_enable(WDTO_1S);
    datos = "";
  }
  if (datos == "B" && inicio == 1) {
    Serial.println(" REINICIO 2S");
    MsTimer2::start();
    wdt_enable(WDTO_2S);
    datos = "";
  }
  if (datos == "C" && inicio == 1) {
    Serial.println("REINICIO 4S");
    MsTimer2::start();
    wdt_enable(WDTO_4S);
    datos = "";
  }
  if (datos == "D" && inicio == 1) {
    Serial.println("REINICIO 8S");
    MsTimer2::start();
    wdt_enable(WDTO_8S);
    datos = "";
  }
}

void reloj() {
  segundos++;
  Serial.println(segundos);
}
