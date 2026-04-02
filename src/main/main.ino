int ledPin = 3;
int humanPin = 9;
int PWMValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(humanPin, INPUT);   // assuming this is a sensor input
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int photoRegValue = analogRead(A0);
  PWMValue = map(photoRegValue, 0, 1023, 255, 0);

  bool humanDetected = false;

  // Read serial only if available
  if (Serial.available() > 0) {
    char human = Serial.read();
    humanDetected = (human == '1'); 
  }

  if (humanDetected) {
    if (photoRegValue < 200) {
      analogWrite(ledPin, 255);  // full ON
    } else {
      analogWrite(ledPin, PWMValue); // dim
    }
  } else {
    if (photoRegValue > 500) {
      analogWrite(ledPin, 0);  // OFF
    } else {
      analogWrite(ledPin, PWMValue); // dim
    }
  }
}