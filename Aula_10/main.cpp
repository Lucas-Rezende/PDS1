#include "ponto.h"
#include "triangulo.h"
#include "retangulo.h"
#include "circunferencia.h"

#include <iostream>

int main(int argc, char const *argv[])
{
    Ponto p1(0, 0);
    Ponto p2(1, 0);
    Ponto p3(0, 1);
    Ponto p4(0, 3);

    Triangulo t1(p1, p2, p3);
    Triangulo t2(p1, p2, p4);

    std::cout << "Distância entre os pontos: " << p1.distancia(p2) << std::endl;

    std::cout << "Perímetro de um Triângulo: " << t1.Perimetro() << std::endl;
    std::cout << "Area de um Triângulo: " << t1.Area() << std::endl;
    std::cout << "Esse triângulo é: " << t1.Area() << std::endl;

    if (t1.Equilatero() == 1)
    {
        std::cout << "Sim" << std::endl;
    } else
    {
        std::cout << "Não" << std::endl;
    }

    std::cout << "Esses triângulos são semelhantes? ";
    if (t1.Semelhante(t2))
    {
        std::cout << "Sim" << std::endl;
    } else
    {
        std::cout << "Não" << std::endl;
    }

    Ponto pr1(0, 0);
    Ponto pr2(0, 4);
    Ponto pr3(6, 4);
    Ponto pr4(6, 0);

    Retangulo r1(pr1, pr2, pr3, pr4);

    std::cout << "Perimetro do Retângulo: " << r1.Perimetro() << std::endl;
    std::cout << "Área do um Retângulo  : " << r1.Area() << std::endl;
    std::cout << "Esse retangulo é um quadrado? ";
    if (r1.Quadrado() == true)
    {
        std::cout << "Sim " << std::endl;
    } else
    {
        std::cout << "Não " << std::endl;
    }

    Ponto raio(2, 0);

    Circunferencia c1(raio);
    Ponto checkpoint(0, 2);

    Ponto p5(2, 0);
    Ponto p6(-2, 0);
    Ponto p7(0, 2);

    Triangulo checkcirc(p5, p6, p7);

    Ponto p8(2, 0);
    Ponto p9(-2, 0);
    Ponto p10(0, 2);
    Ponto p11(0, 2);

    Retangulo checkrectangle(p8, p9, p10, p11);

    std::cout << "O perímetro dessa circunferência é: " << c1.Perimetro() << std::endl;
    std::cout << "A área dessa circunferência é     : " << c1.Area() << std::endl;
    std::cout << "O ponto pertence a circunferência? ";
    if (c1.contem(checkpoint) == true)
    {
        std::cout << "Sim!" << std::endl;
    } else
    {
        std::cout << "Não!" << std::endl;
    }

    std::cout << "O triângulo pertence a circunferência? ";
    if (c1.contem(checkcirc) == true)
    {
        std::cout << "Sim!" << std::endl;
    } else
    {
        std::cout << "Não!" << std::endl;
    }

    std::cout << "O retângulo pertence a circunferência? ";
    if (c1.contem(checkrectangle) == true)
    {
        std::cout << "Sim!" << std::endl;
    } else
    {
        std::cout << "Não!" << std::endl;
    }
    
    return 0;
}