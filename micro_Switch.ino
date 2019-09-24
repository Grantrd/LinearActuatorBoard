const int buttonPin = 13;
const int forward =  7; 
int buttonState = 0;         

void setup() 
{
  Serial.begin(9600);
  pinMode(forward, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) 
  {
    digitalWrite(forward, HIGH);
    Serial.println("on");
    
  } 
else 
  {
    digitalWrite(forward, LOW);
    Serial.println("off");
  }
      delay(900);

}
