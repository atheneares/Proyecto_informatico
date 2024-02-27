//		ejercicio 5

int lados = 6;

void setup()
{
  Serial.begin(9600);
  
  Serial.println(resultado(lados));
}

void loop()
{
  
}
///////////////////////////////////////////////////////////////////

int resultado(int lados)
{
  int num = random(1, (lados + 1));
  return num;
}