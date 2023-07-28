#define Led_Red 23 //gpio used for led red color

void setup() {
  // put your setup code here, to run once:
  pinMode(Led_Red, OUTPUT); //state output for led red color
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led_Red, HIGH); // state off
  delay(100); //time (ms) on 
  digitalWrite(Led_Red, LOW); // state off
  delay(100); //time (ms) off 
}
