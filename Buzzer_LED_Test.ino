
int Buzzer = 5;
int RedLED = 15;
int GreenLED = 13;
int BlueLED = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer, OUTPUT);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {

  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, LOW);
  
  digitalWrite(Buzzer, HIGH);
  delay(100);
  digitalWrite(Buzzer, LOW);
  digitalWrite(RedLED, HIGH);
  delay(1000);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, HIGH);
  delay(1000);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, HIGH);
  delay(1000);
  digitalWrite(BlueLED, LOW);
  // put your main code here, to run repeatedly:

}
