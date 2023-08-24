// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  int light = analogRead(A0);
  if (light < 500)
  digitalWrite(3, HIGH);
  else digitalWrite(3, LOW);
}