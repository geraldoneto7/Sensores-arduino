
//código para encontrar o valor de rzero, com rl=22K


#include "MQ135.h"
void setup (){
Serial.begin (9600);
}

void loop() {
MQ135 gasSensor = MQ135(A0); // Attach sensor to pin A0
float rzero = gasSensor.getRZero();
Serial.println (rzero);
delay(1000);
}

 

/*
//código para achar o valor de concentraçao de co2

 #include "MQ135.h" 
 #include <Adafruit_GFX.h>
 #include <Adafruit_SSD1306.h>

#define pinoMQ A0
MQ135 gasSensor = MQ135(pinoMQ);
int val;

void setup() {
  Serial.begin(9600);
  pinMode(pinoMQ, INPUT);
}

void loop() {
  val = analogRead(pinoMQ);
  Serial.print ("raw = ");
  Serial.println (val);
 // float zero = gasSensor.getRZero();
 // Serial.print ("rzero: ");
  //Serial.println (zero);
  float ppm = gasSensor.getPPM();
  Serial.print ("ppm: ");
  Serial.println (ppm);
  delay(2000);
}
 
  
 */

........................
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