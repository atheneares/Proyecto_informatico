Código: 

#include <Servo.h>

/*
Utilizando un sensor de movimiento para identificar si hay una persona acercándose a una puerta ( la puesta es doble )
Utilizar un par de servo-motores para abrirle ambas puertas a la persona.
Utilizar otro sensor de movimiento del otro lado de la puerta para cerrar la puerta cuento la persona termino de cruzarla.
Además revisar todo el tiempo si hay poca visibilidad (esta oscuro) en ese caso prender un farol de luz led de 24v (en la puerta de salida)

Utilizar funciones/procedimientos  creadas por ustedes para la detección del movimiento, detección de luz, prendido de luminaria, para abrir y cerrar las puertas.

Mantener el ciclo void loop() lo mas corto de codificación utilizando funciones
Todas las funciones/procedimientos deben recibir parámetros de entrada (lo que sientan mas apropiado)
*/

Servo servoPuerta1;
Servo servoPuerta2;

#define led 2

#define servo1 3
#define servo2 5

#define pirSalida 8
#define pirEntrada 7

#define ldr A3

void setup()
{
  servoPuerta1.attach(3);
  servoPuerta2.attach(5);
 
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(pirSalida, INPUT);
  pinMode(pirEntrada, INPUT);
  pinMode(servo1, OUTPUT);
  pinMode(servo2, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  leerSensorPIR(pirEntrada);
  leerSensorPIR(pirSalida);
 
  leerSensorLdr(ldr, led);
 
}

void leerSensorPIR(int pin) {
    int estadoSensor = digitalRead(pin);
    int anguloServo1, anguloServo2;
   
    if (pin == pirEntrada) {
      anguloServo1 = 180;
      anguloServo2 = 0;
    } else if (pin == pirSalida) {
      anguloServo1 = 0;
      anguloServo2 = 180;
    }

    if (estadoSensor == HIGH) {
      abrirPuertas(anguloServo1, anguloServo2);
      delay(10000);
    } else {
      cerrarPuertas();
    }
}

void leerSensorLdr(int pinLdr, int pinLed) {
    int luz = analogRead(pinLdr);
    if (luz >= 30) {
      digitalWrite(pinLed, HIGH);
    }
  else{
      digitalWrite(pinLed, LOW);
  }
}

void abrirPuertas(int angulo1, int angulo2) {
    servoPuerta1.write(angulo1);
    servoPuerta2.write(angulo2);
}

void cerrarPuertas() {
    servoPuerta1.write(90);
    servoPuerta2.write(90);
}
