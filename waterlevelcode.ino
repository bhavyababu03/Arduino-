int waterlevelPin = 3;     // the number of the pushbutton pin
 int buzzerPin =  4;      // the number of the LED pin

// variables will change:
int waterlevelState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(buzzerPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(waterlevelPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  waterlevelState = digitalRead(waterlevelPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (waterlevelState == HIGH) {
    // turn LED on:
    digitalWrite(buzzerPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(buzzerPin, LOW);
  }
}