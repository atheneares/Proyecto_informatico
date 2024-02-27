//		ejercicio 10

int pines[] =  {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int estado[] = {1, 0, 1, 0, 1, 0, 1, 0,  1,  0,  1,  0};
// 0 => OUTPUT		1 => INPUT
void setup()
{
  Serial.begin(9600);
  
  configurar_pines(pines, estado);
}

void loop()
{
  
}
////////////////////////////////////////////////////////////////////

void configurar_pines(int pines[], int estado[])
{
  for (int i = 0; i < 12; i++)
  {
    pinMode(pines[i], estado[i]);
    
    Serial.print("Pin: ");
    Serial.print(pines[i]);
    Serial.print(", estado: ");
    Serial.println(estado[i]);
  }
  
}//configurar_pines