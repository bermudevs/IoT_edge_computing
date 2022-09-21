// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(4, LOW);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300); // Wait for 300 millisecond(s)
}