//		ejercicio 6

int pines[] = {13, 12, 11, 10, 9, 8};

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  senales();
}
/////////////////////////////////////////////////////////////////////

void senales()
{
  for (int i = 8; i < 14; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }//for 1
  
  
  for (int i = 8; i < 14; i++)
  {
    digitalWrite(i, LOW);
  }//for 2
  
  delay(500);
  
}//señales