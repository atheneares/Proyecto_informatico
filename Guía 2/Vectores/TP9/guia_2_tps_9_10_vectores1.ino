//      Ejercicio 9

#define verde 9
#define azul 10
#define rojo 11

int L1[] = {122 , 234 , 21};
int L2[] = {33  , 53  , 155};
int L3[] = {200 , 255 , 12};

int* colores[] = {L1, L2, L3};

void setup()
{
  for(int v = 0; v < (sizeof(colores)/sizeof(int)); v++)
  {
    if(v == 0)
    {
      analogWrite(verde, L1[0]);
      analogWrite(azul, L1[1]);
      analogWrite(rojo, L1[2]);
    }
    if(v == 1)
    {
      analogWrite(verde, L2[0]);
      analogWrite(azul, L2[1]);
      analogWrite(rojo, L2[2]);
    }
    if(v == 2)
    {
      analogWrite(verde, L3[0]);
      analogWrite(azul, L3[1]);
      analogWrite(rojo, L3[2]);
    }
    
    delay(1500);
  }//for v
}//setup

void loop()
{
  
}