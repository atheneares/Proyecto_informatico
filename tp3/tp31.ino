#define led1rojo A3
#define led1azul A4
#define led1verde A5

#define pot1 A2
#define pot2 A1
#define pot3 A0

#define boton 2

void setup()
{
  pinMode(led1rojo, INPUT);
  pinMode(led1azul, INPUT);
  pinMode(led1verde, INPUT);
  
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  
  pinMode(boton, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop()
{
  int lecturaAnal1 = analogRead(pot1);
  int nuevoValor1 = map(lecturaAnal1, 0, 1023, 0, 255);
  
  int lecturaAnal2 = analogRead(pot2);
  int nuevoValor2 = map(lecturaAnal2, 0, 1023, 0, 255);
  
  int lecturaAnal3 = analogRead(pot3);
  int nuevoValor3 = map(lecturaAnal3, 0, 1023, 0, 255);
  
  int estadoBotoncito = digitalRead(boton);
 
  
  if(estadoBotoncito != HIGH)//== (!estadoBotoncito)
  {
    analogWrite(led1rojo ,0);
    analogWrite(led1azul ,0);
    analogWrite(led1verde ,0);
    delay(10000);
    
  }else{
    
    analogWrite(led1rojo, nuevoValor1);
    analogWrite(led1azul, nuevoValor2);
    analogWrite(led1verde, nuevoValor3);
    
  }
  
  Serial.print(" el led esta usando R:");
  Serial.print(nuevoValor1);
  
  Serial.print(" G:");
  Serial.print(nuevoValor2);
  
  Serial.print(" B:");
  Serial.println(nuevoValor3);
}