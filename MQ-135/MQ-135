#include <MQ135.h> //biblioteca do sensor MQ135

#define pinoMQ A0 //pino do Arduino usado para a conexão
MQ135 mq = MQ135(pinoMQ); //define mq como objeto do tipo MQ135
float concentracaoCo2; //vetor para os dados lidos de CO2

void setup()
{
  Serial.begin(9600); //inicialização do Monitor Serial
}

void loop()
{
  concentracaoCo2 = mq.getPPM(); // concentração de CO2 informada pelo sensor
  //MQ135
  Serial.print("Concentração de CO2: ");
  Serial.print(concentracaoCo2);
  Serial.println(" ppm");
  delay(1000); //intervalo de 1 segundo
}
