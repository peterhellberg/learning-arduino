/* SOS signal using a led */

// Pin 13 has an LED connected on most Arduino boards
int led = 13;
int durations[]={300,300,300,600,600,600,300,300,300};

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pins as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i=0; i<9; i++) {
    digitalWrite(led, HIGH); // LED ON
    delay(durations[i]);     // wait for x ms
    digitalWrite(led, LOW);  // LED OFF
    delay(300);              // wait for 300ms
  }

  // wait 1 second
  delay(2000);
}
