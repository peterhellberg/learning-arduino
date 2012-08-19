/*
 Episode 008 -- Analog Out with Fading
 */

int led = 11;
int top = 0;

void setup() {
  // nothing happens in setup
}

void loop()  {
  top += 5;

  // fade in from min to max in increments of 5 points:
  for(int val = 0 ; val <= top; val +=5) {
    // sets the value (range from 0 to 255):
    analogWrite(led, val);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for(int val = top ; val >= 0; val -=5) {
    // sets the value (range from 0 to 255):
    analogWrite(led, val);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  if(top >= 30) { top = 0; }
}
