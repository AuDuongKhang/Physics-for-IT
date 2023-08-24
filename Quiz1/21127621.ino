void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(12 ,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);           //den do
  delay(10000);
  digitalWrite(8, LOW);
  delay(1000);
  
  digitalWrite(2, HIGH);           //den xanh
  delay(7000);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(12, HIGH);           //den vang
  delay(3000);
  digitalWrite(12, LOW);
  delay(1000);

  


  
}
