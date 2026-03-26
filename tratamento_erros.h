bool erro = false;
bool todasDesligadas = true;
bool todasLigadas = true;

for (int i = 1; i < 5; i++) {
 if (sensorLigado(i) && !sensorLigado(i - 1)) {
   erro = true;
 }
}

for (int i = 0; i < 5; i++) {
 if (sensorLigado(i)) {
   todasDesligadas = false;
 } else {
   todasLigadas = false;
 }
}

if (todasDesligadas) {
 consumo = 0;
 estadoBomba = false;
 erro = false;
 nivelAtual = 0;
}
