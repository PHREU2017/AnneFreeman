
  int sensorPin = A3;
  int lightValue;
  int led1 = 6;
  int led2 = 9;
  int led3 = 10;
  int led4 = 11;

  int count = 0; // timer for medication box

void setup() {
  // put your setup code here, to run once:
   pinMode(sensorPin, INPUT);
  pinMode(A5, OUTPUT);
  digitalWrite(A5, HIGH);
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightValue = analogRead(sensorPin);
if(lightValue >= 30)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
}

else if(lightValue < 30)
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);

  delay(1000);
  count = count + 1000;
}

else if(count < 43200000)
{
  do
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    lightValue = analogRead(sensorPin);
  }while(lightValue < 30); 
}
}
