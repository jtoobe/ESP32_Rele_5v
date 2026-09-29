const int relePin = 14;

void setup() {
  pinMode(relePin, OUTPUT);
}

void loop() {
  digitalWrite(relePin, HIGH);  // Activa rele
  delay(1000);                 // Esperar 1 segundo

  digitalWrite(relePin, LOW);  // Desactiva rele
  delay(1000);                // Esperar 1 segundo
}
