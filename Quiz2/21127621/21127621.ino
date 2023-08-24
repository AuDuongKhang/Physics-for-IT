int trig_pin = 2;
int echo_pin = 3;

long getDistance()
{
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  long duration = pulseIn(echo_pin,HIGH);
  long distanceCm= duration*0.034/2;
  return distanceCm;
  }

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);

  pinMode(4,OUTPUT);             //den 1
  pinMode(7,OUTPUT);             //den 2
  pinMode(8,OUTPUT);             //den 3
  pinMode(12,OUTPUT);            //den 4
  pinMode(13,OUTPUT);            //den 5

}

void loop() {
  // put your main code here, to run repeatedly:
  long distanceCm= getDistance();
  if (distanceCm < 51)
  {
     digitalWrite(4,HIGH);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
  }
  else if (distanceCm > 50 && distanceCm < 101)
  {
     digitalWrite(4,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,LOW);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
  }
  else if (distanceCm > 100 && distanceCm < 151)
  { 
     digitalWrite(4,HIGH);
     digitalWrite(7,HIGH);
     digitalWrite(8,HIGH);
     digitalWrite(12,LOW);
     digitalWrite(13,LOW);
  }
  else if (distanceCm > 150 && distanceCm < 201)
  {   
     digitalWrite(4,HIGH);
     digitalWrite(7,HIGH);
  	 digitalWrite(8,HIGH);
     digitalWrite(12,HIGH);
     digitalWrite(13,LOW);
  }
  else
  {
     digitalWrite(4,HIGH);
     digitalWrite(7,HIGH);
  	 digitalWrite(8,HIGH);
     digitalWrite(12,HIGH);
     digitalWrite(13,HIGH);
  }	
  Serial.println(distanceCm);
}
