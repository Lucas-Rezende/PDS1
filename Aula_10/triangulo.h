#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "ponto.h"

class Triangulo
{
private:
    Ponto _pt1;
    Ponto _pt2;
    Ponto _pt3;
public:
    Triangulo() : _pt1(0, 0), _pt2(0, 0), _pt3(0, 0) {}
    Triangulo(Ponto pt1, Ponto pt2, Ponto pt3);
    float Perimetro();
    float Area();
    bool Equilatero();
    bool Semelhante(Triangulo& t);

    Ponto getPonto1();
    Ponto getPonto2();
    Ponto getPonto3();
};

#endif