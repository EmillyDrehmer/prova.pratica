int leitura = analogRead(vazaoPin);
float vazao = (leitura / 1023.0) * 1000.0;
float deltaT = 0.5;

if (estadoBomba) {
 consumo += vazao * deltaT;
}

if (consumo > 9000) {
 consumo = 9000;
}

if (millis() - tempoAnterior > 5000) {
 EEPROM.put(0, consumo);
 tempoAnterior = millis();
}
