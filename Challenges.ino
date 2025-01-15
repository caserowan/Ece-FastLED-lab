// ----- Problem 1 -----
void turnLedOn(CRGB color, int index) {
  leds[index] = color;
  FastLED.show();  // <-- Very important and easy to forget!!!
}

void turnLedOff(int index) {
  leds[index] = CRGB::Black;
  FastLED.show();
  /* COMPLETE ME */
}

// ----- Problem 2 -----
void turnAllLedsOff() {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = CRGB::Black;
  // What should we put here to turn the led at index "i" off?
  FastLED.show();
}

void turnAllLedsOn(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = color;
  /* COMPLETE ME */
}

// ----- Problem 3 -----
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    FastLED.show();
    delay(waitTime);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
    for (int i = 9; (i > 0) && (i < NUM_LEDS); i--) {
    leds[i] = color;
    FastLED.show();
    delay(waitTime);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
    // set led to the given color
    // display the color onto the strip
    // wait the given amount of time
    // set led back to the color black
}
  

  /* FINISH ME */

