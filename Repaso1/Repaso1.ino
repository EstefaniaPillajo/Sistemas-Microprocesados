
//Deber de sistemas microsprocesados
//Estefanía Pillajo

float val;
float conversor;
String dato;
int aux = 0;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  Serial.println("Limite de lectura de ADC");
  Serial.println("Ingrese un valor limite");
}
void loop() {
  if (Serial.available() > 0) {                   
    aux = dato.toInt();                           
  }
  if (aux > 0 && aux <= 1023) {                   
    val = analogRead(A0);                       
    delay(200);                                  
    if (val > aux) { 
      //Para encender el led
      digitalWrite(8, HIGH);                      
    }
    else {
      //Para apagar el led
      digitalWrite(8, LOW);                       
    }
  }
}
