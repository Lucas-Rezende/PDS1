#include "triangulo.h"

#include <cmath>

Triangulo::Triangulo(Ponto pt1, Ponto pt2, Ponto pt3)
{
    _pt1 = pt1;
    _pt2 = pt2;
    _pt3 = pt3;
}

float Triangulo::Perimetro()
{
    return (_pt1.distancia(_pt2)) + (_pt1.distancia(_pt3)) + (_pt2.distancia(_pt3));
}

float Triangulo::Area()
{
    float cateto1, cateto2, hipotenusa;

    float dist1 = _pt1.distancia(_pt2);
    float dist2 = _pt1.distancia(_pt3);
    float dist3 = _pt2.distancia(_pt3);

    if (dist1 >= dist2 && dist1 >= dist3)
    {
        hipotenusa = dist1;
        cateto1 = dist2;
        cateto2 = dist3;
    }
    else if (dist2 >= dist1 && dist2 >= dist3)
    {
        hipotenusa = dist2;
        cateto1 = dist1;
        cateto2 = dist3;
    }
    else
    {
        hipotenusa = dist3;
        cateto1 = dist1;
        cateto2 = dist2;
    }

    if (dist1 == dist2 == dist3)
    {
        return (cateto1 * cateto2) / 2;
    }
    else if (dist1 == dist2 || dist1 == dist3 || dist2 == dist3)
    {
        return (cateto1 * cateto2) / 2;
    }
    else
    {
        float semiperimetro = (dist1 + dist2 + dist3) / 2;
        float area = std::sqrt(semiperimetro * (semiperimetro - dist1) * (semiperimetro - dist2) * (semiperimetro - dist3));
        return area;
    }
}

bool Triangulo::Equilatero() {
    int dist1 = _pt1.distancia(_pt2);
    int dist2 = _pt1.distancia(_pt3);
    int dist3 = _pt2.distancia(_pt3);

    //Returns the absolute value of x
    if (fabs(dist1) == fabs(dist2) && fabs(dist1) == fabs(dist3) && fabs(dist2) == fabs(dist3))
    {
        return 1;
    } else {
        return 0;
    }
}

bool Triangulo::Semelhante(Triangulo& t) {
    int dist1 = _pt1.distancia(_pt2);
    int dist2 = _pt1.distancia(_pt3);
    int dist3 = _pt2.distancia(_pt3);

    int tDist1 = t._pt1.distancia(t._pt2);
    int tDist2 = t._pt1.distancia(t._pt3);
    int tDist3 = t._pt2.distancia(t._pt3);

    // Verificar a razão entre as distâncias dos lados correspondentes
    bool razao1 = (dist1 * tDist2) == (dist2 * tDist1);
    bool razao2 = (dist2 * tDist3) == (dist3 * tDist2);
    bool razao3 = (dist3 * tDist1) == (dist1 * tDist3);

    // Verificar se todas as razões são iguais
    if (razao1 && razao2 && razao3) {
        return true;
    } else {
        return false;
    }
}

Ponto Triangulo::getPonto1() {
    return _pt1;
}

Ponto Triangulo::getPonto2() {
    return _pt2;
}

Ponto Triangulo::getPonto3() {
    return _pt3;
}