/*
 Amplification

 Light up all the leds
 */

// Pin 12 has an LED connected on most Arduino boards
int led = 12;

void setup() {
  pinMode(led, OUTPUT);
}

void blink() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                // wait 500ms
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                // wait 500ms
}

void loop() {
  blink();
}
