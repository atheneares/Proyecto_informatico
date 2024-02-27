/*-Leer datos que nos brinda un sensor de temperatura(TPM36) 
y uno de luz ambiental(LDR).
-Mostrar esos 2 datos por el monitor serial con el siguiente 
formato:

    "El nivel de luz actual es:"  VALOR " y la temperatura 
    actual:" VALOR  "ºc"   c/u en una linea distinta                                


-Hacer prender un led RGB según la temperatura que mida el 
sensor:
                -rojo: si es más de 90°c
                -azul: si es menos de 18°c
                -verde: si está entre 18ºc y 90ºc
 -Solo se debera prender el led como se indica arriba, siempre 
 y cuando no halla luz ambiental.*/

#define led1rojo 3
#define led1azul 5
#define led1verde 6

#define tmp A0

#define ldr A1

void setup()
{
  pinMode(tmp, INPUT);
  
  pinMode(ldr, INPUT);
  
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{// Leer el valor del sensor de temperatura
  // Convertir el valor a grados Celsius
  /*int tmp = analogRead(tmp);
  float anal = (5.0 / 1024 * tmp);
  float grados = (anal * 100 - 50);*/
	
  float grados = (5.0 / 1024 * analogRead(tmp)) * 100 - 50;
  
  // Leer el valor del sensor de luz
  int luz = analogRead(ldr);
  int ldr2 = map(luz, 0, 310, 0, 100); 
  
  // Mostrar los valores por el monitor serial
  Serial.print("El nivel de luz actual es: ");
  Serial.print(ldr2);
  Serial.print(" y la temperatura actual es: ");
  Serial.print(grados);
  Serial.println("-C");

  // Verificar las condiciones para encender el LED RGB
  if (grados > 90 && ldr2 != 0) {
    // Temperatura alta y no hay luz ambiental
    analogWrite(led1rojo, 255);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 0);
  }else if (grados < 18 && ldr2 != 0) {
    // Temperatura baja y no hay luz ambiental
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 255);
  }else if (grados >= 18 && grados <= 90 && ldr2 != 0) {
    // Temperatura en rango y no hay luz ambiental
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 255);
    analogWrite(led1azul, 0);
  } else {
    // No se cumplen las condiciones, apagar el LED
    analogWrite(led1rojo, 0);
    analogWrite(led1verde, 0);
    analogWrite(led1azul, 0);
  }
	
}
