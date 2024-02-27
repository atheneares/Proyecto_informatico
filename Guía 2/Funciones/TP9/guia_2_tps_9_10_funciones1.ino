//		ejercicio 9

int vector[5];

void setup()
{
  Serial.begin(9600);
  
  llenarV(vector);
}

void loop()
{
  
}
////////////////////////////////////////////////////////////////////

void llenarV(int vector[])
{ 
  int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  
  for (int i = 0; i < 5; i++)
  {
    int num = random(0, 9);
    vector[i] = numeros[num];
  }//for
  
  Serial.print("[");
  Serial.print(vector[0]);
  Serial.print(", ");
  Serial.print(vector[1]);
  Serial.print(", ");
  Serial.print(vector[2]);
  Serial.print(", ");
  Serial.print(vector[3]);
  Serial.print(", ");
  Serial.print(vector[4]);
  Serial.println("]");
  
}//llenarV