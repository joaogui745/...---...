#define LEDPIN 2
#define DOT 100
#define RANGEINIT 65
#define RANGEEND 90

const char* const message = "SOS";  // ALL UPPERCASE MESSAGE
const char* const morseAlphabet[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

const char* morseCode;
int msgIndex, morseDelay, morseIndex;
char msgChar, morseChar;
void setup() {
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  msgIndex = 0;
  while (msgChar = message[msgIndex]) {
    if (msgChar < RANGEINIT || msgChar > RANGEEND) {
      delay(7 * DOT);
    } else {
      morseCode = morseAlphabet[msgChar - 65];
      morseIndex = 0;
      while (morseChar = morseCode[morseIndex]) {
        morseDelay = morseChar == '.' ? 1 : 3;
        digitalWrite(LEDPIN, HIGH);
        delay(morseDelay * DOT);
        digitalWrite(LEDPIN, LOW);
        delay(DOT);
        morseIndex++;
      }
      delay(2 * DOT);
    }
    msgIndex++;
  }
  delay(7 * DOT);
}
