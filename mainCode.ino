// Define segment pins
const int segmentA = 11;
const int segmentB = 12;
const int segmentC = 8;
const int segmentD = 7;
const int segmentE = 6;
const int segmentF = 10;
const int segmentG = 9;
const int segmentDP = 5;
const int button = 2;

void setup() {
// Set all segment pins as outputs
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(segmentDP, OUTPUT);
  pinMode(button, INPUT);

  // Initialize random number generator
  randomSeed(analogRead(0)); // Use an unconnected analog pin to seed randomness
}

void loop() {
if (digitalRead(button) == HIGH){
  for (int i = 0; i < 2; i++) {
  loadingCircle();
  }
  int randomNumber = random(1, 7); // Generate a random number from 1 to 6
  displayNumber(randomNumber);
}
}
// Function to display the given number
void displayNumber(int number) {
  switch (number) {
    case 1: displayOne(); break;
    case 2: displayTwo(); break;
    case 3: displayThree(); break;
    case 4: displayFour(); break;
    case 5: displayFive(); break;
    case 6: displaySix(); break;
    case 7: displaySeven(); break;
    case 8: displayEight(); break;
    case 9: displayNine(); break;
  }
}

void loadingCircle() {
  // Turn on each segment one at a time in a circular pattern
  clearDisplay();

  digitalWrite(segmentA, HIGH);  // A
  delay(100);
  clearDisplay();

  digitalWrite(segmentB, HIGH);  // B
  delay(100);
  clearDisplay();

  digitalWrite(segmentC, HIGH);  // C
  delay(100);
  clearDisplay();

  digitalWrite(segmentD, HIGH);  // D
  delay(100);
  clearDisplay();

  digitalWrite(segmentE, HIGH);  // E
  delay(100);
  clearDisplay();

  digitalWrite(segmentF, HIGH);  // F
  delay(100);
  clearDisplay();
}

// Function to turn off all segments
void clearDisplay() {
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentDP, LOW);
}

// Functions to display each number for common cathode display
void displayOne() {
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentDP, LOW);
}

void displayTwo() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, LOW);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displayThree() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displayFour() {
  digitalWrite(segmentA, LOW);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displayFive() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displaySix() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, LOW);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displaySeven() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, LOW);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, LOW);
  digitalWrite(segmentG, LOW);
  digitalWrite(segmentDP, LOW);
}

void displayEight() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, HIGH);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}

void displayNine() {
  digitalWrite(segmentA, HIGH);
  digitalWrite(segmentB, HIGH);
  digitalWrite(segmentC, HIGH);
  digitalWrite(segmentD, HIGH);
  digitalWrite(segmentE, LOW);
  digitalWrite(segmentF, HIGH);
  digitalWrite(segmentG, HIGH);
  digitalWrite(segmentDP, LOW);
}
