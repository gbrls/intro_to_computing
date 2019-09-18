#define amarelo 11
#define vermelho 12
#define verde 13
#define entrada_botao 2
int n;
void setup()
{
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(entrada_botao, INPUT);
}

void loop()
{
  for (n = 6000; n > 0; n--)
  {
    int botao = digitalRead(entrada_botao);
    if (botao == 1)
    {
      n = (6000 - n) / 2;
    }
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    delay(1);
  }
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(1000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(3000);
}
