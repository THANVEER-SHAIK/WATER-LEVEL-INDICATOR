const int lowButton = 2;
const int mediumButton = 3;
const int highButton = 4;

const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 10;

void setup() {
  pinMode(lowButton, INPUT_PULLUP);
  pinMode(mediumButton, INPUT_PULLUP);
  pinMode(highButton, INPUT_PULLUP);

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  bool low = digitalRead(lowButton) == LOW;
  bool medium = digitalRead(mediumButton) == LOW;
  bool high = digitalRead(highButton) == LOW;

  if (high) {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, HIGH);
  }
  else if (medium) {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  else if (low) {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  else {
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
}
