#include<DHT.h>
DHT dht(3, DHT11);
int ir=7;
int ldr=6;
int relay=5;
int hand;
int light;
int buzz=4;
void setup(){
  pinMode(ldr,INPUT);
  pinMode(ir,INPUT);
  pinMode(relay,OUTPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  hand=digitalRead(ir);
  light=digitalRead(ldr);
  float val = dht.readTemperature();
   Serial.println(val);
  if(val >=33){
    digitalWrite(buzz,HIGH);
    }else{
    digitalWrite(buzz,LOW);
  }

  if(hand==LOW&&light==LOW){
    digitalWrite(relay,LOW);
    delay(2000);
    digitalWrite(relay,HIGH);
    Serial.println("motion detected");
    delay(1000);
  }
  else{
    digitalWrite(relay,HIGH);
    Serial.println("no motion");
    delay(1000);
  }
}
