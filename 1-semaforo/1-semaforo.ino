#define amarelo 11
#define vermelho 12
#define verde 13
#define entrada_botao 2
#define TIME_VERDE 6000
#define TIME_AMARELO 1000
#define TIME_VERMELHO 3000
int n;
int btn_press = 0; /* variavel para guardar se o botão ja foi pressionado */
void setup()
{
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(entrada_botao, INPUT);
}

void loop()
{
  // ACENDE O VERDE
  btn_press = 0; /* reiniciar o estado do botão */
  for (n = 0; n < TIME_VERDE; n++)
  {
    int botao = digitalRead(entrada_botao);
    if (botao == 1 && !btn_press)
    {
      n += (TIME_VERDE - n) / 2;
      btn_press = 1;
    }
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    delay(1);
  }

  // ACENDE O AMARELO
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(TIME_AMARELO);

  // ACENDE O VERMELHO
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(TIME_VERMELHO);
}
