#include "retangulo.h"

Retangulo::Retangulo(Ponto pt1, Ponto pt2, Ponto pt3, Ponto pt4) {
    _pt1 = pt1;
    _pt2 = pt2;
    _pt3 = pt3;
    _pt4 = pt4;
}

float Retangulo::Perimetro() {
    float dist1 = _pt1.distancia(_pt2);
    float dist2 = _pt1.distancia(_pt4);
    float dist3 = _pt2.distancia(_pt3);
    float dist4 = _pt3.distancia(_pt4);
    
    float perimetro = dist1 + dist2 + dist3 + dist4;
    return perimetro;
}

float Retangulo::Area() {
    float dist1 = _pt1.distancia(_pt2);
    float dist3 = _pt2.distancia(_pt3);
    
    float area = (dist1 + dist3)/2;
    return area;
}

bool Retangulo::Quadrado() {
    float dist1 = _pt1.distancia(_pt2);
    float dist2 = _pt1.distancia(_pt4);
    float dist3 = _pt2.distancia(_pt3);
    float dist4 = _pt3.distancia(_pt4);

    if (dist1 == dist3 && dist2 == dist4)
    {
        return true;
    } else
    {
        return false;
    }
}

Ponto Retangulo::getPonto1() {
    return _pt1;
}

Ponto Retangulo::getPonto2() {
    return _pt2;
}

Ponto Retangulo::getPonto3() {
    return _pt3;
}

Ponto Retangulo::getPonto4() {
    return _pt4;
}