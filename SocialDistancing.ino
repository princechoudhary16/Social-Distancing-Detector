int trigPin = 9;
int echoPin = 10;
long duration;
int distanceCm, distanceInch;
void setup()
{
    Serial.begin(9600);
    pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
}
void loop() {
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distanceCm= duration*0.034/2;
    Serial.println(distanceCm);
    delay(1000);
    if(distanceCm < 15){
        digitalWrite(11,HIGH);
        digitalWrite(12,HIGH);
    }else{
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
    }
}