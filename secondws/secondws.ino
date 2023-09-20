float echoPin=A0;
float trigPin=A1;
int led=4;
long duration;
float distance;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 duration=pulseIn(echoPin,HIGH);
 distance=duration*0.034/2;
 Serial.println(distance);
 if(distance>15)
 {
   digitalWrite(led,HIGH);
 }
 else
 {
   digitalWrite(led,LOW);
 }
}
