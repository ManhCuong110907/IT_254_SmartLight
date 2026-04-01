// void setup() {
//   Serial.begin(9600);
//   pinMode(12, OUTPUT); // Red
//   pinMode(11, OUTPUT); // Yellow
//   pinMode(10, OUTPUT); // Green

// }
// void loop() {
//   if (Serial.available() > 0) {
//   char command = Serial.read();
//   // Turn all off first
//   digitalWrite(12, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(10, LOW);
//   if (command == 'R') digitalWrite(12, HIGH); // Red ON
//   if (command == 'Y') digitalWrite(11, HIGH); // Yellow ON
//   if (command == 'G') digitalWrite(10, HIGH); // Green ON
// }
// }
int ledPin = 3; 
int PWMValue; 
int motionPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(motionPin, INPUT); 
}

// void loop() {
//   int motionVal = digitalRead(motionPin);
//   Serial.println(motionVal);
//   delay(50);
//   int sensorValue = analogRead(A0); //reads the input on analog pin A0
//   PWMValue = map(sensorValue, 0, 1023, 255, 0); //maps sensor value to proportional PWM values
//   //Serial.println(PWMValue);
//   analogWrite(ledPin, PWMValue); 
//   delay(500); 
// }
void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();

    if (data == '1') {
      analogWrite(ledPin, 255); // ON
      delay(1000);
    } else {
      analogWrite(ledPin, 0);   // OFF
      delay(1000);
    }
  }
}