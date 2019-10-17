void checkLights() {
  if (echoDistance >= 50) {
    for (lightPin = 1; lightPin < 6; lightPin++) {
      digitalWrite(lightPin, HIGH);
      delay(50);
    }
  } else if (echoDistance >= 40 && echoDistance < 50) {
    for (lightPin = 1; lightPin < 5; lightPin++) {
      digitalWrite(lightPin, HIGH);
      delay(50);
    }
    digitalWrite(5, LOW);
  } else if (echoDistance >= 30 && echoDistance < 40) {
    for (lightPin = 1; lightPin < 4; lightPin++) {
      digitalWrite(lightPin, HIGH);
      delay(50);
    }
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  } else if (echoDistance >= 20 && echoDistance < 30) {
    for (lightPin = 1; lightPin < 3; lightPin++) {
      digitalWrite(lightPin, HIGH);
      delay(50);
    }
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  } else if (echoDistance >= 10 && echoDistance < 20) {
    for (lightPin = 1; lightPin < 2; lightPin++) {
      digitalWrite(lightPin, HIGH);
      delay(50);
    }
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  } else if (echoDistance >= 0 && echoDistance < 10) {
    for (lightPin = 6; lightPin > 0; lightPin--) {
      digitalWrite(lightPin, LOW);
      delay(50);
    }
  }
}
