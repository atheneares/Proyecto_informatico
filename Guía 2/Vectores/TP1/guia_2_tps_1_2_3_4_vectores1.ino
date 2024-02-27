//      Ejercicio 1

int vector[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int suma = 0;

void setup()
{
  Serial.begin(9600);
  
  
  for (int i = 0; i < (sizeof(vector)/sizeof(int)); i++)
    {
      suma += vector[i];
    }
  
    int promedio = suma/(sizeof(vector)/sizeof(int));
    Serial.println(promedio); 
}

void loop()
{
  
}