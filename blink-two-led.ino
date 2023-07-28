#define Led_Green 23 //gpio used for led green color
#define Led_Blue 22 //gpio used for led blue color


void setup() {
  // put your setup code here, to run once:
  pinMode(Led_Green, OUTPUT); //state output for green red color
  pinMode(Led_Blue, OUTPUT); //state output for blu red color
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led_Green, HIGH); // state off green
  delay(500); //time (ms) on 
  digitalWrite(Led_Green, LOW); // state off green
  delay(500); //time (ms) off 
  digitalWrite(Led_Blue, HIGH); // state off green
  delay(500); //time (ms) on 
  digitalWrite(Led_Blue, LOW); // state off green
  delay(500); //time (ms) off 
}
