int nivelAtual = 0;

bool sensorLigado(int i) {
 return digitalRead(niveis[i]) == HIGH;
}

void loop() {
 nivelAtual = 0;

 for (int i = 0; i < 5; i++) {
   if (sensorLigado(i)) {
     nivelAtual++;
   }
 }
}
