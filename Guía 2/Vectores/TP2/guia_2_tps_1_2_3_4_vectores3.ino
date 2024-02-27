//      Ejercicio 2

int vector[] = { 10, 4 , 2 };

void setup()
{
  Serial.begin(9600);
  
  
  int menor1 = 1000;
  int menor2 = 1000;
  int menor3 = 1000;
  
  for(int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
  {
    if(vector[i] < menor2)
    {
      if(vector[i] < menor1)
      {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = vector[i];
      }//if 2
      else
      {
        menor3 = menor2;
        menor2 = vector[i];
      }//else
    }//if 1
    else
    {
      menor3 = vector[i];
    }//else
  }//for
  
  Serial.print("[");
  Serial.print(menor1);
  Serial.print(", ");
  Serial.print(menor2);
  Serial.print(", ");
  Serial.print(menor3);
  Serial.print("]");
}

void loop()
{
  
}
