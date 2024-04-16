//Definições para os pinos que serão usados
#define botaoA 6
// pino onde será conectada a entrada A
#define botaoB 7
// pino onde será conectada a entrada B
#define ledXOR 8
// pino que mostrará a saída OU exclusivo (XOR)
#define ledOU 9
// pino que mostrará a saída OU (OR)
#define ledE 10
// pino que mostrará a saída E (AND)

// variáveis que armazem os valores dos botoes
boolean valA = 0;
boolean valB = 0,
void setup {
// configura os pinos dos LED.
pinMode(ledXOR , OUTPUT);
pinMode(ledOU, OUTPUT);
pinMode (ledE, OUTPUT);
// configura os pinos onde os botões estão conectados
pinMode (botaoA, INPUT):
pinMode (botaoB, INPUT);
void loop(){
// Lê o estado dos Botões
valA = digitalRead (botaoA);
valB = digitalRead (botaoB);

digitalWrite(ledXOR, valA ^ valB); // Operador ^ XOR
digitalWrite(ledOU, valA | valB); // Operador | OU
digitalWrite(ledE , valA & valB); // Operador & E

}