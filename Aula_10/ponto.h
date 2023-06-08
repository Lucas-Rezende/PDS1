#ifndef PONTO_H
#define PONTO_H

class Ponto
{
private:
    float _x;
    float _y;
public:
    Ponto() : _x(0), _y(0) {}
    Ponto(float x, float y);
    float distancia(Ponto& p);
};

#endif