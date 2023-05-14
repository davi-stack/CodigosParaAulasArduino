void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(300);
}
int n;
void loop() {
  // put your main code here, to run repeatedly:
   n = analogRead(A0);
   if(n<300) digitalWrite(7, 0);
   else digitalWrite(7, 1);
}
