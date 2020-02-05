/*
   Universidad Técnica del Norte
   Facultad de Ingeniería en Ciencas Aplicadas
   Carrera de Ingeniería en Electrónica y Redes de Comunicación
   Estefanía Pillajo
   04-02-2020
*/


#include <LowPower.h>
#include <avr/wdt.h>
#include <EEPROM.h>
#include <avr/sleep.h>
#include <MsTimer2.h>
#include <TimerOne.h>
#include <avr/power.h>
#include <LiquidCrystal.h>

int contador = 0;
int dato;
int infoLcd = 7;
int memoria = EEPROM.read(0);

void setup() {
  LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(conteo);
  power_all_enable();
  lcd.begin(16, 2);
  memoria = 0;
}

void loop() {
  Serial.println(memoria);
  dormir();
  lcd.setCursor(6, 1);
  lcd.print("Tiempo:" + String(contador));
  dato = analogRead(0);
  lcd.setCursor(0, 1);
  lcd.print(dato);
}

void desactivar() {
  if (contador == 5) {
    memoria = memoria + 1;
    lcd.setCursor(0, 0);
    lcd.print("CANADIG DESACT"); //se desactiva el conversor analogo digital
    power_adc_disable();
    contador++;
  }
  if (contador == 8) {
    lcd.setCursor(0, 0);
    lcd.print("                     ");
    lcd.setCursor(0, 0);
    lcd.print("COMSER DESACT"); //se desactiva la comunicacion serial
    power_spi_disable();
    contador++;
  }
  if (contador == 12) {
    lcd.setCursor(0, 0);
    lcd.print("                    ");
    lcd.setCursor(0, 0);
    lcd.print("DESACTIVADO"); //se desactiva por completo
    power_all_disable();
    contador++;
  }
  if (EEPROM.read(0) > 12) {
    memoria = 0;
    power_all_enable();
    EEPROM.write(0, memoria);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("REINICIO DE SIST");
    digitalWrite(infoLcd, HIGH);
    delay(10);
    wdt_enable(WDTO_1S);

  }
}
