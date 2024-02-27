#define botonn A0

#define buzzer A1

#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 1
#define G 0

#define AA 9
#define B2 10
#define C2 11
#define D2 12
#define E2 13
#define F2 8
#define G2 7

int pines[]  = {A , B , C , D , E , F , G , AA , B2 , C2 , D2 , E2 , F2 , G2};
int estado[] = {1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,  1 ,  1  , 1  , 1 };

void setup()
{   
  pinMode(buzzer, OUTPUT);
  pinMode(botonn, INPUT);
  
  for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ){
  	pinMode( pines[i] , estado[i] );
  }
  
}

void loop()
{
      				   // A   B   C   D   E   F   G
    int apagar[]       = {0 , 0 , 0 , 0 , 0 , 0 , 0};
  	int numeroUno[]    = {0 , 1 , 1 , 0 , 0 , 0 , 0};
  	int numeroDos[]    = {1 , 1 , 0 , 1 , 1 , 0 , 1};
    int numeroTres[]   = {1 , 1 , 1 , 1 , 0 , 0 , 1};
    int numeroCuatro[] = {0 , 1 , 1 , 0 , 0 , 1 , 1};
    int numeroCinco[]  = {1 , 0 , 1 , 1 , 0 , 1 , 1};
    int numeroSeis[]   = {1 , 0 , 1 , 1 , 1 , 1 , 1};
  
  int* numerosAmostrar[] = {apagar, numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco, numeroSeis};
	    
  //hacer funcionar el boton mediante una lectura analogica y MAP
  int lecturaBotonn = analogRead(botonn);
  int boton = map(lecturaBotonn, 1013, 1023, 0, 1);  
  

  if (boton == 1){ 
  	
    //animacion
    for( int v = 0 ; v < (sizeof(numerosAmostrar)/sizeof(int)) ; v++ ){
      for( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++ ){
          digitalWrite( pines[i] , numerosAmostrar[v][i] );
          digitalWrite( pines[i + 7] , numerosAmostrar[v][i] );
      }
  	  delay(100);
	} 
    
    //generar dos numeros randoms entre 1 y 7 y mostrarlo
    int numeroDisplay1 = random( 1 , 7);
    int numeroDisplay2 = random( 1 , 7);
    
    //mostrar los numeros randoms en el display
    for(int i = 0 ; i < 7 ; i++){
        digitalWrite(pines[i], numerosAmostrar[numeroDisplay1][i]);
        digitalWrite(pines[i + 7], numerosAmostrar[numeroDisplay2][i]);
    }
    
    // sonar buzzer si la suma de los numeros randoms es igual a 7
    if(numeroDisplay1 + numeroDisplay2 == 7){
   	  analogWrite(buzzer, 255);
      delay(1000);
      analogWrite(buzzer, 0);
	  }
   
    delay(1000);
    
    for (int i = 0; i < 7; i++)
    {
      digitalWrite(pines[i]  , numerosAmostrar[0][i]);
      digitalWrite(pines[i+7], numerosAmostrar[0][i]);
    } 
    
    
    
  }// if boton == 1
  
}