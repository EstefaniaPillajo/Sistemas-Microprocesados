
//Estefania Pillajo
//Repaso2

int led[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int i = 0;
int numero;                        
int numero2;                       
String dato;

void setup() {
  Serial.begin(9600);
  Serial.println("Ingrese el dato");
  for (; i < 9; i++) {
    pinMode(led[i], OUTPUT);   
  }
  i = 0;                      
}
void loop() {
  for (i = 0; i < 9; i++) {   
    digitalWrite(led[i], LOW);
  }
  if (Serial.available() > 0) {
    dato = Serial.readString();
    numero = dato.toInt();
    numeros();
  }
}
  void numeros() {
    if (numero >= 0 && numero <= 256) { 
      numero2 = numero;                
      for (i = 0; i < 8; i++) {
        if (numero2 % 2 == 1) {    
          digitalWrite(led[i], HIGH);
          delay(200);

        }
        else {
          digitalWrite(led[i], LOW);
          delay(200);

        }
        numero2 = numero2 / 2;     
      }
    }
  }
