//		ejercicio 7

int vector[] = {8, 4, 1, 10, 6, 3, 9, 5, 2, 7};

void setup()
{
  Serial.begin(9600);
  
  mayorMenor(vector);
}

void loop()
{
  
}
/////////////////////////////////////////////////////////////////////

void mayorMenor(int vector[])
{
  for (int i = 0; i < 10; i++)
  {      
    //se usa para recorrer el vector y comparar elementos
    for (int v = 0; v < 10 - 1; v++)
    {
      int siguienteE = v + 1;
    
      if (vector[v] > vector[siguienteE])
      {
        int aux = vector[v];
        vector[v] = vector[siguienteE];
 	    vector[siguienteE] = aux;
      }//if 1
    }//for v
  }//for i
  
  
  Serial.print("[");
  
  for (int j = 0; j < 10; j++)
    {
      Serial.print(vector[j]);
    
      if (j != 9)
      {
        Serial.print(", ");
      }//if 2
      else
      {
        Serial.println("]");
      }//else
    }//for j
  
}//menorMayor