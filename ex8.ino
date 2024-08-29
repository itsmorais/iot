// C++ code
int celsius = 0;
int TMP = A5;
int buzzer = 13; 

void setup()

{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{  
    celsius = map(((analogRead(TMP) - 20) * 3.04), 0, 1023, -40, 125);

  if(celsius > 30){  
  tone(buzzer, 1000, 1000); 
  delay(100);	
}

   
}