#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include "ponto.h"
#include "retangulo.h"
#include "triangulo.h"

class Circunferencia
{
private:
    Ponto _raio;
public:
    Circunferencia(Ponto raio);
    float Perimetro();
    float Area();
    bool contem(Ponto& p);
    bool contem(Triangulo& p);
    bool contem(Retangulo& r);
    bool pertence(Ponto& p);
    bool circunscrita(Triangulo& t);
    bool circunscrita(Retangulo& r);
};

#endif