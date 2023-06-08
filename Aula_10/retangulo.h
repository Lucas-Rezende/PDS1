#ifndef RETANGULO_H
#define RETANGULO_H

#include "ponto.h"

class Retangulo
{
private:
    Ponto _pt1;
    Ponto _pt2;
    Ponto _pt3;
    Ponto _pt4;
public:
    Retangulo() : _pt1(0, 0), _pt2(0, 0), _pt3(0, 0) {}
    Retangulo(Ponto pt1, Ponto pt2, Ponto pt3, Ponto pt4);
    float Perimetro();
    float Area();
    bool Quadrado();
    Ponto getPonto1();
    Ponto getPonto2();
    Ponto getPonto3();
    Ponto getPonto4();
};

#endif