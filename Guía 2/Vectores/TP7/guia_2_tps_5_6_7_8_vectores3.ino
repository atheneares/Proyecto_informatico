//      Ejercicio 7

#define led1 8
#define led2 9
#define led3 10
#define led4 11
#define led5 12

int vector[] = {led1, led2, led3, led4, led5};

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop()
{
  for(int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
  {
    digitalWrite(vector[i], HIGH);
    delay(500);
  }
}