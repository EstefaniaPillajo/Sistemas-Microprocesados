/*Deber de interrupciones
PillajoEstefania
UTN-FICA-CIERCOM*/
int on = 0;
String dato;
int i = 0;
String posicion;
int swapped;
int almacenamiento;

void setup() {
  attachInterrupt(0, seleccion, LOW);
  Serial.begin(9600);
  Serial.println("SISTEMA ENCENDIDO");
  Serial.println("Ejercicio de interrumpiciones");
  Serial.println("Ingrese cualquier numero en desorden");
}
void loop() {
  if (Serial.available() > 0) {
    dato = Serial.readString();
    Serial.println("\n");
    Serial.println("Presione el boton para ordenar en forma ascente el numero ingresado");
  }
  if (on == 1) {
    int numero[dato.length()];                 
    for (i = 0; i < dato.length(); i++) {   
      posicion = dato.substring(i, (i + 1));    
      numero[i] = posicion.toInt();                
    }
    do {                                   
      swapped = 0;
      for (i = 0; i < dato.length(); i++) { 
        if (numero[i] > numero[i + 1]) {          
          swapped = 1;
          almacenamiento = numero[i];
          numero[i] = numero[i + 1];
          numero[i + 1] = almacenamiento;
        }
      }
    }
    while (swapped);
    for (i = 0; i < dato.length(); i++) { 
      Serial.print(numero[i]);
    }
    on = 0;
  }
}
void seleccion() {
  on = 1 - on;

}
