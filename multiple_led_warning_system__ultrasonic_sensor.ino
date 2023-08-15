

#define echoPin 2 
#define trigPin 3 


long duration; 
int distance; 

void setup() {
  pinMode(trigPin, 3); 
  pinMode(echoPin, 2); 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  Serial.println("with Arduino UNO R3");
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
   if ( distance <= 25)
  {
    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
  }
  if ( distance > 25 )
  {
    digitalWrite(8, HIGH);
  }
  if (distance >50)
  {
    digitalWrite(8, LOW);
  }
  if ( distance >50 )
  {
    digitalWrite(12, HIGH);
  }
  if (distance >75)
  {
    digitalWrite(12, LOW);
  }
  if ( distance >75)
  {
    digitalWrite(13, HIGH);
  }
  if (distance >100)
  {
    digitalWrite(13, LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
