#include <DHT.h> // incluindo biblioteca
#include <DHT_U.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include "DHT.h"

#define DHTPIN A1 // define entrada analogico

DHT dht(DHTPIN, DHT11);

void setup()
{
  pinMode(DHTPIN, INPUT); // setuo inicial, ou quando reinicia o arduino
  Serial.begin(9600);
  dht.begin();
}

// dht 11 - inicia o sensor, fazendo a captação da temperatura e da umidade

void loop()
{
float dht11_umidade = dht.readHumidity(); // sensor umidade e temperatura
float dht11_temperatura = dht.readTemperature();
Serial.print(dht11_umidade); //exbição protna para entrar no bd
Serial.print(";");
Serial.print(dht11_temperatura);
Serial.print(";");
Serial.println(); // "pula linha"
}