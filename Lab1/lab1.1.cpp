int redLED = 8;
int yellowLED = 12;
int greenLED = 13;
void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(yellowLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(greenLED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(greenLED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}