// Set which pin the Signal output from the light sensor is connected to
// If using the LilyPad Development Board, change this to A6
int sensorPin = A3;
// Create a variable to hold the light reading
int lightValue;
int led1 = 5;
void setup()
{
    // Set sensorPin as an INPUT
    pinMode(sensorPin, INPUT);
    pinMode(led1, OUTPUT);

    // Set pin A5 to use as a power pin for the light sensor
    // If using the LilyPad Development Board, comment out these lines of code
     pinMode(A5, OUTPUT);
    digitalWrite(A5, HIGH);

    // Initialize Serial, set the baud rate to 9600 bps.
    Serial.begin(9600);
}

void loop()
{

   // Get the current light level
    lightValue = analogRead(sensorPin);

   // Print some descriptive text and then the value from the sensor
    if(lightValue <=100)
    {
      digitalWrite(led1, LOW);
    }
    else
    {
      digitalWrite(led1, HIGH);
    }
}
