//      Ejercicio 3

float vector[] = {5.4 , 5.39 , 5.38 , 5.31 , 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49  };

void setup()
{
  Serial.begin(9600);
  
  
  float mayor = 0;
  for(int i = 0; i < 10; i++)
  {
    if(vector[i] > mayor)
    {
      mayor = vector[i];
    }//if
  }//for
  Serial.println(mayor);
}//setup

void loop()
{
  
}
  