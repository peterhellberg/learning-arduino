/* Button */

int red_led   = 11;
int green_led = 10;
int button    = 3;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if(digitalRead(button) == HIGH) {
    digitalWrite(red_led, LOW);
    digitalWrite(green_led, HIGH);
  } else {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
  }
}

