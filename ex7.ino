// C++ code
//
int LED_VERDE = 13;
int LED_AMARELO = 11;
int LED_VERMELHO = 10;
int buttonState = 0;
int ldrValor = 0;
int ldrPin = A5;

void setup()

{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(ldrPin,INPUT);
  Serial.begin(9600);
}

void loop()
{  
 ldrValor = analogRead(ldrPin); //ler o valor do ldr 
  Serial.println(ldrValor);
  
  if(ldrValor >= 900){
   delay(100);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_AMARELO,HIGH);
    digitalWrite(LED_VERDE,HIGH);


	} 
  if(ldrValor >= 700 && ldrValor < 900){
       delay(100);
	    digitalWrite(LED_AMARELO,HIGH);
        digitalWrite(LED_VERMELHO, LOW);



  }
    if(ldrValor >= 350 && ldrValor < 700){
       delay(100);
      digitalWrite(LED_VERDE,HIGH);
      digitalWrite(LED_AMARELO,LOW);
      digitalWrite(LED_VERMELHO, LOW);
      	
  }
  
  if(ldrValor < 150){
	    digitalWrite(LED_VERDE,LOW);
    	digitalWrite(LED_AMARELO,LOW);
	    digitalWrite(LED_VERMELHO,LOW);

}
   
}