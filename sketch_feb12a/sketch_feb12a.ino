void setup()
{
  int led=6;
  pinMode(led,OUTPUT);
}
void loop() 
{
digitWrite(led,HIGH);
delay(500);
digitWrite(led,LOW);
delay(600);
}