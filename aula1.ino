int n;
void setup()
{
  pinMode(11, OUTPUT); // amarelo
  pinMode(12, OUTPUT); // vermelho
  pinMode(13, OUTPUT); //verde 
  pinMode(2, INPUT);
}

void loop()
{
  for (n = 6000; n > 0; n--)
  {
    int botao = digitalRead(2);
    if (botao == 1)
    {
      n = (6000 - n) / 2;
    }
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(1);
  }
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(3000);
}
