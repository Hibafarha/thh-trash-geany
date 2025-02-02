#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

Servo lidServo;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lidServo.attach(servoPin);
  lidServo.write(0); // Lid closed position

  Serial.begin(9600); // For debugging
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Convert to cm

  Serial.print("Distance: ");
  Serial.println(distance);

  // Check distance to open lid
  if (distance < 20) { // If hand is within 20 cm
    lidServo.write(90); // Open lid (adjust angle as needed)
    delay(3000); // Keep lid open for 3 seconds
    lidServo.write(0); // Close lid
  }
  delay(200); // Delay before next reading
}
