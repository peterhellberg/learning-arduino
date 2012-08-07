/* Breadboard prototyping */

int red_led = 11;
int green_led = 10;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  delay(600);

  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(600);
}
