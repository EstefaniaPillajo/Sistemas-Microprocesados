/*
   Universidad Técnica del Norte
   Facultad de Ingeniería en Ciencas Aplicadas
   Carrera de Ingeniería en Electrónica y Redes de Comunicación
   Estefanía Pillajo
   04-02-2020
*/
#include<TimerOne.h>
#include<avr/sleep.h>
#include<avr/power.h>
#include <avr/wdt.h>
#include<EEPROM.h>

int contador = 0;
int mood;

void setup() {
  Serial.begin(9600);
  mood = EEPROM.read(0);
  EEPROM.write(0, 1);
  attachInterrupt(0, despertar, LOW);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(conteo);
  set_sleep_mode(SLEEP_MODE_PWR_SAVE);
  Serial.begin(9600);
  Serial.println(mood);


}

void loop() {
  if (contador == 2 ) {
    Serial.println("ACTIVADO");
    EEPROM.write(0, 1);
    Serial.println(mood);
  }
  if (contador == 12) {
    Serial.println("DESACTIVADO");
    EEPROM.update(0, 0);
    sleep_mode();
    sleep_enable();
    sleep_disable();
  }
}

void conteo() {
  contador++;

}

void despertar() {
  sleep_disable();
  Serial.println("REINICIANDO");
  contador = 0;
}
