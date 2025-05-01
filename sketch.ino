int ledm = 13;
int ledk = 12;
int ledh = 11;
const int trigpin = 10;
const int echopin = 9;
int buzzer = 8;
long timer;
int jarak;

void setup() {
  Serial.begin(9600);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  timer = pulseIn(echopin, HIGH);
  jarak = timer / 58;
  Serial.println(jarak);
  delay(200);

  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);

  if (jarak <= 10) {
    digitalWrite(ledm, HIGH);
    tone(buzzer, 200);
    delay(200);
    noTone(buzzer);
  } 
  else if (jarak <= 50) {
    digitalWrite(ledk, HIGH);
    tone(buzzer, 200);
    delay(500);
    noTone(buzzer);
  } 
  else if (jarak <= 100) {
    digitalWrite(ledh, HIGH);
    tone(buzzer, 200);
    delay(1000);
    noTone(buzzer);
  } 
  else {
    digitalWrite(ledm, LOW);
    digitalWrite(ledk, LOW);
    digitalWrite(ledh, LOW);
  }
}
