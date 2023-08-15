#define echoPin 2
#define trigPin 3
long duration;
int distance;
//int Buzzer = 10;
const float freq = 261.63;

void setup() 
{
  // put your setup code here, to run once:
pinMode(trigPin,3);
pinMode(echoPin,2);
pinMode(10,OUTPUT);
 pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);

  distance = duration * 0.034/2;
//    tone(Buzzer,400);
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
  if(distance>75)
  {
    digitalWrite(12,LOW);
  }
  if(distance>75)
  {
    digitalWrite(13,HIGH);
    tone(10,freq,100);
//    delay(100);
//    tone(10,freq,1);
//    delay(100);
  }
  if(distance>100)
  {
   digitalWrite(13,LOW);
   tone(10,600,100);
  }
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
