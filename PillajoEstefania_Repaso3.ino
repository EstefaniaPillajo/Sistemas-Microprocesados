//Sistemas Microprocesados
//Estefanía Pillajo
//Repaso 3

String dato;  
int led1=6;
int led2=7;
int led3=8;
int led4=9;
int led5=10; 
int i;            

void setup() {
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  
Serial.begin(9600);           
Serial.println("Escoga una opcion para los diferentes juegos de luces:");
Serial.println("ACBF: Primer juego de luces (impares)");
Serial.println("ACGF: Segundo juego de luces(pares)");
Serial.println("ADBF: Tercer juego de luces (ascendente)");
Serial.println("ADBH: Cuarto juego de luces (descendente)");

}

void loop() {
 
 if(Serial.available()>0){           
   dato=Serial.readString();
 }
// if((dato=="ACBF")||(dato=="ACGF")||(dato=="ADBF")||(dato=="ADBH")){
//  Serial.println("Dato incorrecto");
//  delay(400);
// }
 if(dato=="ACBF"){ 
  for (i=6; i<11; i=i+2){ 
    digitalWrite(i,HIGH);
    delay(400);
    digitalWrite(i,LOW);
    delay(400);
  }
 }
 if(dato=="ACGF"){  
  for(i=7; i<11; i=i+2){
    digitalWrite(i,HIGH);
    delay(400);
    digitalWrite(i,LOW);
    delay(400);
  }
 }
 if(dato=="ADBF"){   
    for(i=6; i<11; i++){
    digitalWrite(i,HIGH);
    delay(400);
    digitalWrite(i,LOW);
    delay(400);
  }
 }
 if(dato=="ADBH"){ 
  for(i=10; i>5; i--){
    digitalWrite(i,HIGH);
    delay(400);
    digitalWrite(i,LOW);
    delay(400);
  }
 }
}
