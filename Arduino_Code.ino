
const int tensPins[4] = {2, 3, 4, 5};
const int unitsPins[4] = {6, 7, 8, 9};

void displayDigit(int digit, const int pins[]) {
  for (int i = 0; i < 4; i++) {
    digitalWrite(pins[i], (digit >> i) & 1);
  }
}

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(tensPins[i], OUTPUT);
    pinMode(unitsPins[i], OUTPUT);
  }
}

void loop() {
  for (int count = 0; count <= 30; count++) {
    int tens = count / 10;
    int units = count % 10;

    displayDigit(tens, tensPins);
    displayDigit(units, unitsPins);

    delay(1000);
  }
}

