// C++ code
//
    int LED_VERDE = 13;
  int LED_AMARELO = 11;
  int LED_VERMELHO = 10;
int buttonState = 0;
int botao = 3;

void setup()

{
  pinMode(botao, INPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop()
{  
  buttonState = digitalRead(botao);
  

  if (buttonState == HIGH) {
      Serial.println("Ola mundo");
      Serial.println("IF ==" + buttonState);
    digitalWrite(LED_VERMELHO, LOW);
  } else {
    digitalWrite(LED_VERMELHO, HIGH);
      Serial.println("Ola mundo");
    Serial.println("ELSE ==" + buttonState);

  }
  
   
}