float limites[5] = {1000, 3000, 5000, 7000, 9000};
bool limiteAtingido = false;

if (nivelAtual > 0) {
 float limiteMax = limites[nivelAtual - 1];

 if (consumo >= limiteMax && nivelAtual < 5) {
   limiteAtingido = true;
 }
}

if (!erro && !todasDesligadas && !limiteAtingido) {
 estadoBomba = true;
 bombaServo.write(180);
} else {
 estadoBomba = false;
 bombaServo.write(0);
}
