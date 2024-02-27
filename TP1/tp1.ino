/* Desarrollar un código y un esquema electrónico básico que haga una secuencia de luces con 3 leds RGB.

La secuencia es la siguiente: 

    prende el 1°led en color rojo. (De forma analógica)
    se apaga el 1° led y se prende el 2° led en color magenta(de forma digital)
    se paga el 2° led y se prende el 3° led en color cian(De forma analógica y tenue)
    se paga el 3° led y se prende el 1° led  devuelta y así infinitamente.
*/
#define led1rojo  A0

#define led2rojo  2
#define led2azul  3

#define led3azul  5
#define led3verde 6

void setup()
{
  pinMode(led1rojo, OUTPUT);
  
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  
  pinMode(led3azul, OUTPUT);
  pinMode(led3verde, OUTPUT);
}

void loop()
{
  //preder apagar led rojo 
  analogWrite(led1rojo, 255); 
  delay(500);
  analogWrite(led1rojo, 0);
  delay(500);
  
  //prender apgagar led magenta
  digitalWrite(led2rojo, HIGH);
  digitalWrite(led2azul, HIGH);
  delay(500);
  digitalWrite(led2rojo, LOW);
  digitalWrite(led2azul, LOW);
  delay(500);
  
  //prender y apagar led cian
  analogWrite(led3verde, 127);
  analogWrite(led3azul, 127);
  delay(500);
  analogWrite(led3verde, 0);
  analogWrite(led3azul, 0);
  delay(500);
}