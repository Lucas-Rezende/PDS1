#include "circunferencia.h"

#include <cmath>
#include "triangulo.h"

Ponto origin(0, 0);

Circunferencia::Circunferencia(Ponto raio) {
    _raio = raio;
}

float Circunferencia::Perimetro() {
    float r = _raio.distancia(origin);
    return 2*M_PI*r;
}

float Circunferencia::Area() {
    float r = _raio.distancia(origin);
    return M_PI*pow(r, 2);
}

bool Circunferencia::contem(Ponto& p) {
    float r = _raio.distancia(origin);
    float dist = p.distancia(origin);
    
    return (r == dist);
}

bool Circunferencia::contem(Triangulo& p) {
    float r = _raio.distancia(origin);
    float dist1 = p.getPonto1().distancia(origin);
    float dist2 = p.getPonto2().distancia(origin);
    float dist3 = p.getPonto3().distancia(origin);

    return (r == dist1 && r == dist2 && r == dist3);
}

bool Circunferencia::contem(Retangulo& p) {
    float r = _raio.distancia(origin);
    float dist1 = p.getPonto1().distancia(origin);
    float dist2 = p.getPonto2().distancia(origin);
    float dist3 = p.getPonto3().distancia(origin);
    float dist4 = p.getPonto4().distancia(origin);

    return (r == dist1 && r == dist2 && r == dist3 && r == dist4);
}