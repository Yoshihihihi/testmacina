// Setze den Pin für die LED auf 13
const byte ledPin = 13;
// Setze den Interruptpin auf 2
const byte interruptPin = 2;
// Definiere eine globale volatile Variable für den Status der LED
volatile byte state = LOW;

void setup() {
  // Lege den Pin für die LED als Outputpin fest
  pinMode(ledPin, OUTPUT);
  // Lege den Interruptpin als Inputpin mit Pullupwiderstand fest
  pinMode(interruptPin, INPUT_PULLUP);
  // Lege die ISR 'blink' auf den Interruptpin mit Modus 'CHANGE':
  // "Bei wechselnder Flanke auf dem Interruptpin" --> "Führe die ISR aus"
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}
// Neue Version erstellt
// Neue Version erstellt
// Neue Version erstellt


void loop() {
  // Schreibe den Status der LED auf den LED-Pin zurück:
  // "Schalte die LED an oder aus"
  for (int i = 0; i < 10000; i++) {
    digitalWrite(ledPin, state);
  }
}
//haudi
void blink() {
  // Invertiere den Status: "Lass die LED blinken von HIGH auf LOW/ an auf aus"
  state = !state;
}
