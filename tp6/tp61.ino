/*Tratar de pensar alguna manera para que un led 
RGB muestre toda la combinaciones de colores existentes 
en la tonalidades de RGB que se escribe de la siguiente
forma:

Formato de color RGB ( 255 ; 255 ; 255 ), donde
cada parte representa los byte de cada columna de
color. En total un led RGB puede producir aprox
16.000.000 de colores.*/

#define ledrojo 3
#define ledazul 5
#define ledverde 6

void setup()
{
  pinMode(ledrojo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledverde,OUTPUT);
}

void loop()
{
  
  /*
  hola profe, espero que de verdad te tomes
  el timepo de ver que todas las combinaciones esten
  bien, espero que disfrutes las 46 y pico horas de ver colores
  */
  for (int rojo = 0; rojo <= 255; rojo++) {
    for (int verde = 0; verde <= 255; verde++) {
      for (int azul = 0; azul <= 255; azul++) {
        
        analogWrite(ledrojo, rojo);
        analogWrite(ledverde, verde);
        analogWrite(ledazul, azul);
        delay(10);
      }//tercer for
    }//segundo for
  }//primer for
}//void loop