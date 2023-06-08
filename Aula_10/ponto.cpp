#include "ponto.h"

#include <cmath>

Ponto::Ponto(float x, float y) {
    _x = x;
    _y = y;
}

float Ponto::distancia(Ponto& p) {
    float distance = std::sqrt(std::pow(p._x - _x, 2) + std::pow(p._y - _y, 2));
    return distance;
}