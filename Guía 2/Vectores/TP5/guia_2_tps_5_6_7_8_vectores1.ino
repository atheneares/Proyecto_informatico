//      Ejercicio 5

#define led1 9
#define led2 10

int secuencia1[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
int secuencia2[] = { 0, 1 ,0 ,1, 0, 0, 1,0};

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  for(int i = 0; i < (sizeof(secuencia1)/sizeof(int)); i++)
  {
    //secuancia 1
    if(secuencia1[i] == 1)
    {
      digitalWrite(led1, HIGH);
    }//if 1
    else
    {
      digitalWrite(led1, LOW);
    }//else 1
    
    //secuencia 2
    if(secuencia2[i] == 1)
    {
      digitalWrite(led2, HIGH);
    }//if 1
    else
    {
      digitalWrite(led2, LOW);
    }//else 1
    
    delay(500);
  }//for
}