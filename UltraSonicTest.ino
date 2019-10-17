// Initialize pins, lights and variables

int lightPin;
int echoDistance;
long echoDuration;
int trigPin = 8;
int echoPin = 7;

void setup() {
  //  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  for (lightPin = 1; lightPin < 6; lightPin++) {
    pinMode(lightPin, OUTPUT);
  } // Initializes light pins, end of FOR loop.
} // All needed pins/variables initialized, end of setup()

void loop() {
  ping();
  checkLights();
}
