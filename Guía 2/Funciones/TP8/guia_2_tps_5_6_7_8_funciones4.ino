//		ejercicio 8

int num1 = 5;
int num2 = 45;

void setup()
{
  Serial.begin(9600);
  
  multiplo(num1, num2);
}

void loop()
{
  
}
///////////////////////////////////////////////////////////////////

void multiplo(int num1, int num2)
{
  for (int i = 1; i < 100; i++)
  {
    if (num1 * i == num2)
    {
      Serial.print("El nuumero ");
      Serial.print(num2);
      Serial.print(" Es multiplo de ");
      Serial.println(num1);
    }//if
  }//for
  
}//multiplo