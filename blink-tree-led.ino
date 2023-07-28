#define Led_Red 21 //gpio used for led red color
#define Led_Green 19 //gpio used for led green color
#define Led_Blue 18 //gpio used for led blue color


void setup() {
  // put your setup code here, to run once:
  pinMode(Led_Red, OUTPUT); //state output for red color
  pinMode(Led_Green, OUTPUT); //state output for green  color
  pinMode(Led_Blue, OUTPUT); //state output for blue color
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led_Red, HIGH); // state on red
  delay(500); //time (ms) on 
  digitalWrite(Led_Red, LOW); // state on red
  delay(500); //time (ms) off 
  digitalWrite(Led_Green, HIGH); // state on green
  delay(500); //time (ms) on 
  digitalWrite(Led_Green, LOW); // state off green
  delay(500); //time (ms) off 
  digitalWrite(Led_Blue, HIGH); // state on blue
  delay(500); //time (ms) on 
  digitalWrite(Led_Blue, LOW); // state off blue
  delay(500); //time (ms) off 
}
