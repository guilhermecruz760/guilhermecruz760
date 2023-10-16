#define trigPin 13
#define EchoPin 14
#define motorPin 4

double measureDistance() {
  long duration, distance;
  //send Pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //wait foe echo and measure time untill it happens
  duration = pulseIn(echoPin, HIGH);

  //Compute distance
  distance = (duration * 344.0) / (2.0 * 10000);  // em centimetros

  return distance;
}