  //CÓDIGO PARA APRESENTAÇÃO DO SINAL SOS NO LED LIGADO À PLACA DO ARDUINO
  //DEFINIÇÃO DE VARIÁVEIS
int LED = 13;
int l_on = 0;
int l_off = 0;
  //LIGAR O LED
void turn_On(int l_on)
{
  digitalWrite(LED, HIGH);
  delay (l_on);
}
  //DESLIGAR O LED
void turn_Off(int l_off)
{
  digitalWrite(LED, LOW);
  delay (l_off);
}
  //SEQUÊNCIA DE INTERVALOS PARA A LETRA "S"
void S()
{
turn_On (500); turn_Off (250); turn_On (500); turn_Off (250); turn_On (500); turn_Off (250);
delay (1500);
}
  //SEQUÊNCIA DE INTERVALOS PARA A LETRA "O"
void O()
{
turn_On (1500); turn_Off (250); turn_On (1500); turn_Off (250); turn_On (1500); turn_Off (250);
delay (1500);
}
  //CONFIGURAÇÃO
void setup() {
pinMode (LED, OUTPUT);
}
  //CÓDIGO QUE IRÁ RODAR EM LOOP
void loop() {
S();
O();
S();
delay (3500);
}