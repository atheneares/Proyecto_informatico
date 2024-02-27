//      Ejercicio 10

#define buzzer 10

int vector[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup()
{
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);

  
  Serial.print("[");
  
  for(int i = 0; i < 10; i++)
  {
    int num = random(1,11);
    vector[i] = num;
    
    Serial.print(vector[i]);
    
    if(num == 5)
    {
      analogWrite(buzzer, 50);
      delay(1000);
      analogWrite(buzzer, 0);
    }
    
    if(i != 9)
    {
      Serial.print(", ");
    }//if
    else
    {
      Serial.println("]");
    }//else
  }//for
  
}//setup

void loop()
{
  
}