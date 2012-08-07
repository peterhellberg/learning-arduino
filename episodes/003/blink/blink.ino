/*
 Blink

 Increasing number of blinks for each iteration.
 */

// Pin 13 has an LED connected on most Arduino boards
int led              = 13;
int number_of_blinks = 1;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

void blink() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                // wait 200ms
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                // wait 400ms
}

// the loop routine runs over and over again forever:
void loop() {
  int count = 0;

  while(count < number_of_blinks) {
    blink();
    count++;
  }

  // wait 2 seconds
  delay(2000);

  number_of_blinks++;
}
