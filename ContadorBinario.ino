//Declaracion de las variables en donde se almacerán las posiciones del contador
int led1 = 3 ; //bit de menos significativo
int led2 = 4 ;
int led3 = 5 ;
int led4 = 6 ;
int led5 = 7 ;
int led6 = 8 ;//bit de mayor significativo
int cont =0 ;
int btn = 2 ;
int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode (3, OUTPUT) ;
  pinMode (4, OUTPUT) ;
  pinMode (5, OUTPUT) ;
  pinMode (6, OUTPUT) ;
  pinMode (7, OUTPUT) ;
  pinMode (8, OUTPUT) ;
  pinMode (2, INPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(btn)==HIGH){ 
    cont ++;
    delay(300);
  }

  for (cont=0 ; cont<64; cont++) {
    delay (1000) ;
    contador (cont) ;
    if (cont>63) 
    cont=0 ;
  }
}

void contador (int contador) {
  switch (contador) { //METODO PARA LA REALIZACION DEL CONTEO DE 6 BITS
    case 0 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 1 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;

    case 2 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 3 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 4 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 5 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;  
   
    case 6 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 7 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 8 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 9 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 10 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 11 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 12 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 13 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 14 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 15 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,LOW) ;
    break ;
    case 16 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 17 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 18 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 19 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 20 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 21 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 22 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 23 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 24 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 25 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 26 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 27 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 28 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 29 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 30 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 31 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,LOW) ;
    break ;
    case 32 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
   case 33 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 34 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;

    case 35 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 36 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 37 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 38 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;  
   
    case 39 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 40 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 41 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 42 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 43 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 44 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 45 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 46 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 47 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,LOW) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 48 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 49 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 50 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 51 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 52 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 53 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 54 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 55 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,LOW) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 56 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 57 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 58 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 59 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,LOW) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 60 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 61 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,LOW) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 62 :
    digitalWrite (3,LOW) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
    case 63 :
    digitalWrite (3,HIGH) ;
    digitalWrite (4,HIGH) ;
    digitalWrite (5,HIGH) ;
    digitalWrite (6,HIGH) ;
    digitalWrite (7,HIGH) ;
    digitalWrite (8,HIGH) ;
    break ;
  }

}
