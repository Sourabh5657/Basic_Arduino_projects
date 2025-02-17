// C++ code
//
int led=6;
int pushbutton=7;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pushbutton,INPUT);
}

void loop()
{
  int buttonstate=digitalRead(pushbutton);
  if(buttonstate==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}