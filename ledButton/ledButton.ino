#define button 19
#define led 4
int buttonState = 1;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);

}
void loop()
{
  buttonState = digitalRead(button);

  if(buttonState == 1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}