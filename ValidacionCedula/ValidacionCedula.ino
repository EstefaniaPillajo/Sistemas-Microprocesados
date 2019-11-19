/*
 *  Deber de validación de cédula
 * El proceso para la validación es el siguiente:
 * La cédula ecuatoriana está formada por los dos primeros dígitos que corresponden a la provincia donde fue expedida, 
 * por lo cual, los dos primeros dígitos no serán mayores a 24 ni menores a 0.
 * El tercer dígito es un número menor a 6 (0,1,2,3,4,5).
 * Los siguientes hasta el noveno dígito son un número consecutivo.
 * El décimo es el dígito verificador.
 * Fuente: https://medium.com/@bryansuarez/c%C3%B3mo-validar-c%C3%A9dula-y-ruc-en-ecuador-b62c5666186f
 */

String Cedguion;
String Ced;
char Cedvector[9];
int Cedint[9];
int total=0;
int coeficientes[]={2,1,2,1,2,1,2,1,2};
String dato;
int tam;
void setup() {
 Serial.begin(9600);
  Serial.println("Ingresar numero de cedula");

}

void loop() {
  if(Serial.available()>0){
    Cedguion=Serial.readString();                          
    Ced=Cedguion.substring(0,9) + Cedguion.substring(10,11); 
    Ced.toCharArray(Cedvector,9);

    
    if(Ced.length()==10){
      Serial.println("\n \n Numero de cedula valida");
      String provincia = Ced.substring(0,2);                  
      provincia = provincia.toInt();
      String tercer = Ced.substring(2,3);                  
      tercer=tercer.toInt();
      String verificador = Ced.substring(9,10);            
      verificador=verificador.toInt();
      

      if ((provincia > 0 && provincia <= 24) && tercer < 6) {
        for(int i = 0; i < 9; i++){
          int producto = coeficientes[i] * Cedvector[i];
          
          if (producto >= 10){
            producto = producto-9;
          }
        }
        total = total % 10;
        total = 10 - total;

        if (total == 10) {
          total = 0;
        }
      }
  if ((provincia > 0 && provincia <= 24) && tercer < 6) {
    for (int i = 0; i < 10; i++){
      int producto = coeficientes[i] * (Ced.charAt(i));
      if (producto >= 10) {
        producto = producto-9;
      }
      total += producto;
    }
    total = total % 10;
    total = 10 - total;
    
    if (total == 10) {
        total = 0;
    }
  }

    }else if(Ced.length()){
      Serial.println("\n La cedula ingresada esta incompleta");
    }
  }
    if(Serial.available()>0){
    dato=Serial.readString(); 
    tam=dato.length();
    char vector[tam];
    dato.toCharArray(vector,tam);
    Serial.println(dato.length());
  }
}
