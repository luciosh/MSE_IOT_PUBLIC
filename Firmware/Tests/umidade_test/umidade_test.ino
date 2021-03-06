const int pinoSensor = A0; //PINO UTILIZADO PELO SENSOR
int valorLido; //VARIÁVEL QUE ARMAZENA O PERCENTUAL DE UMIDADE DO SOLO

int analogSoloSeco = 400; //VALOR MEDIDO COM O SOLO SECO (VOCÊ PODE FAZER TESTES E AJUSTAR ESTE VALOR)
int analogSoloMolhado = 150; //VALOR MEDIDO COM O SOLO MOLHADO (VOCÊ PODE FAZER TESTES E AJUSTAR ESTE VALOR)
int percSoloSeco = 0; //MENOR PERCENTUAL DO SOLO SECO (0% - NÃO ALTERAR)
int percSoloMolhado = 100; //MAIOR PERCENTUAL DO SOLO MOLHADO (100% - NÃO ALTERAR)
float UmidadePercentualLida;
int UmidadePercentualTruncada;
char FieldUmidade[11];

void setup(){
 Serial.begin(9600); //INICIALIZA A SERIAL
 Serial.println("Lendo a umidade do solo..."); //IMPRIME O TEXTO NO MONITOR SERIAL
 delay(2000); //INTERVALO DE 2 SEGUNDOS
}

void loop(){  
	UmidadePercentualLida = FazLeituraUmidade();
	UmidadePercentualTruncada = (int)UmidadePercentualLida; //trunca umidade como número inteiro
  Serial.print("Umidade do solo percentual: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(UmidadePercentualLida); //IMPRIME NO MONITOR SERIAL O PERCENTUAL DE UMIDADE DO SOLO
  Serial.println("%"); //IMPRIME O CARACTERE NO MONITOR SERIAL
  Serial.print("Umidade do solo inteira: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(UmidadePercentualTruncada); //IMPRIME NO MONITOR SERIAL O PERCENTUAL DE UMIDADE DO SOLO

  delay(1000);  //INTERVALO DE 1 SEGUNDO
}
