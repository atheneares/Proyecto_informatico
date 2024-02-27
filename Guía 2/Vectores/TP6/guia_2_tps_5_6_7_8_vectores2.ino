//      Ejercicio 6

int vector[] = { 2 , 6 , 10 , 11};

void setup()
{
  Serial.begin(9600);
  
  
  int resultado1 = 0;
  int resultado2 = 0;
  int resultado3 = 0;
  int resultado4 = 0;
  int resultado5 = 0;
  
  for(int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
   {
     resultado1 = vector[i] * 1;
     Serial.println(resultado1);
    
     resultado2 = vector[i] * 2;
     Serial.println(resultado2);
    
     resultado3 = vector[i] * 3;
     Serial.println(resultado3);
    
     resultado4 = vector[i] * 4;
     Serial.println(resultado4);
    
     resultado5 = vector[i] * 5;
     Serial.println(resultado5);
   }//for
}

void loop()
{
  
}