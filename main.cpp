#define rele 3
#define sensor 2

bool irrigar = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(rele, OUTPUT);
  pinMode(sensor, INPUT);

  digitalWrite(rele, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  // irrigar = digitalRead(sensor);

  if(irrigar)
  {
    digitalWrite(rele, LOW);
    delay(5000);
    digitalWrite(rele, HIGH);
    delay(3000);
  }
  else
  {
    digitalWrite(rele, HIGH);
    delay(1000);
  }
  delay(500);
}
