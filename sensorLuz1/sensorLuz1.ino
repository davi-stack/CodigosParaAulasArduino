void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(300);
}
int n;
void loop() {
  // put your main code here, to run repeatedly:
   n = analogRead(A0);
   Serial.println(n);
}
