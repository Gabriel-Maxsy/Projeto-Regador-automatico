// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop()  
{
  int vermelho = 1;
  int verde = 12;
  int amarelo = 7;
  digitalWrite(verde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);
  delay(1000);
  digitalWrite(vermelho, HIGH);
  delay(1000);
  digitalWrite(vermelho, LOW);
  delay(1000);	
  digitalWrite(LED_BUILTIN, LOW);
}

// led parte menor negativa, parte maior positiva
