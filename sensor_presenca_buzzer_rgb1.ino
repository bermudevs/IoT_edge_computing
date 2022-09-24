// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(7));
  if (digitalRead(7) == 1) {
    tone(5, 523, 200); // play tone 60 (C5 = 523 Hz)
    digitalWrite(2, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    tone(5, 294, 500); // play tone 50 (D4 = 294 Hz)
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    tone(0, 523, 200); // play tone 60 (C5 = 523 Hz)
  }
  delay(500); // Wait for 500 millisecond(s)
}