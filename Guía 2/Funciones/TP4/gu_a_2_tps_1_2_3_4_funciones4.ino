//       Ejercicio 4

#define led 6
#define Mov 7

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(Mov, INPUT);
}

void loop()
{
  movimiento();
}
/////////////////////////////////////////////////////////////////////

void movimiento()
{
  int mov = digitalRead(Mov);
  if (mov == 1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}