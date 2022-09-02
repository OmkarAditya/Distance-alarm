#define echo 2 
#define trig 3 
int led=12;
long dur; 
int dist; 

void setup() {
  pinMode(led,OUTPUT);
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT);
  Serial.begin(9600); 
  Serial.println("TEST 1");
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  dur = pulseIn(echo, HIGH);
  dist = dur * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");
  if(dist<10){
    digitalWrite(led, HIGH);
    delay(75);
    digitalWrite(led, LOW);
    delay(75);
  }
  else{
    digitalWrite(led, LOW);
  }
}
