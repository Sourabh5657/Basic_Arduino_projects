// C++ code
//used digital pin
int Led=1;
void setup()
{
  pinMode(Led,OUTPUT);
}

void loop()
{
  //used analog pin A3
  int potvalue=analogRead(A3);
  analogWrite(Led,potvalue/4);
  delay(10);
}