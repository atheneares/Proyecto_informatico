Se desea realizar un  pequeño juego en el cual nos permita lanzar 2 dado digitales (usar display de 7 segmentos), el cual tengamos un boton que cuando lo toquemos UNA SOLA VEZ (no mantener apretado) empezara a calcular 2 numero aleatorios entre 1 y 6  y los mostrara en los 2 display correspondientes.

En el caso de que que la suma de ambos dados (ambos numeros aleatorios) sumen 7, el jugador habrá ganado, y habrá que indicárselo mediante una alarma sonora ( buzzer - no usar la función Tone()  ) 

Si es posible, realizar una animacion rapida en la muestra de los numeros de la siguiente manera:
antes de mostrar el numero final,  mostrar varios numeros al azar con un bajo delay, esto dara la imprecion de que los dados se estan moviendo antes de mostrar el numero final que se calculo con el random.
Para usar el pin 0 y 1 NO SE PUEDE TENER LA CONSOLS Serial.begin() y Serial.print() activas en el codigo
El boton se puede leer de forma analogica por los pine A0-A5
Se puede (no convencionalmente) usar los pines A0-A5 como Salidas (OUTPUT analogWrite)
