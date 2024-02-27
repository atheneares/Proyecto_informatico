//       Ejercicio 3

#include <LiquidCrystal.h>

// LiquidCrystal (rs, enable, d4, d5, d6, d7)
LiquidCrystal LCD(13,   12  , 11, 10, 9 , 8);

void setup()
{
  LCD.begin(16, 2);
}

void loop()
{
  bienvenida();
  delay(2000);
  inicio();
  delay(2000);
  finalJuego();
  delay(2000);
  puntaje();
  delay(2000);
}
/////////////////////////////////////////////////////////////////////

void bienvenida()
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Bienvenido/a");
}

void inicio()
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("El juego ha");
  LCD.setCursor(0, 1);
  LCD.print("comenzado");
}

void finalJuego()
{
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("El juego");
  LCD.setCursor(0, 1);
  LCD.print("termino");
}

void puntaje()
{
  int puntaje = random(0, 10000);
  
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Tu puntaje final");
  LCD.setCursor(0, 1);
  LCD.print("es: ");
  LCD.setCursor(5, 1);
  LCD.print(puntaje);
}