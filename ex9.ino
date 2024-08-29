// C++ code
//
int LED_VERMELHO = 10;
int SENSOR = 6;
int SENSOR_ESTADO = 0;


void setup(){

  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(SENSOR,INPUT);
  Serial.begin(9600);
}

void loop()
{  
  SENSOR_ESTADO = digitalRead(SENSOR);
 	
 
  if(SENSOR_ESTADO == HIGH){
    Serial.println("Presença detectada!");
    digitalWrite(LED_VERMELHO, HIGH);
    delay(1000);
    digitalWrite(LED_VERMELHO, LOW);



	} 
   if(SENSOR_ESTADO == LOW){
    digitalWrite(LED_VERMELHO, LOW);

	} 
 
   
}