const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
const int switchPin=1;//Switch pin
void setup() {
   Serial.begin(9600); // Starting Serial Terminal
}

void loop() {
   long duration, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   cm = microsecondsToCentimeters(duration);
   if(cm<=15)
   {
  Serial.println("2");
  delay(500);

  pushButton();
   }
   else
   {
    Serial.println("0");
   }
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
void pushButton()
{
  long c=0l;
  long count=9000l;
  while(c<count)
  {
    c+=100l;
    delay(100);
    int val=analogRead(switchPin);
    //Serial.println(val);
    if(val==0)
    {
      Serial.println("1");
      delay(1000);
      break;
    }
    else
    {
      Serial.println("0");
    }
  }
}
