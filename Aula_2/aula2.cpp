#include <iostream>
#include <cmath>

int media (int a, int b, int c) {
    return (a+b+c)/3;
}

int media_ponderada (int a, int b, int c) {
    return ((a*3)+(b*4)+(c*5))/12;
}

int perimetro (int r) {
    return 2*M_PI*r;
}

int area_circulo (int r) {
    return M_PI*pow(r, 2);
}

int area_triangulo (int b, int c) {
    return (b*c)/2;
}

int area_caixa (int a, int b, int c) {
    return 2*((a*b)+(a*c)+(b*c));
}

int volume_caixa (int a, int b, int c) {
    return a*b*c;
}

int area_cilindro (int r, int h) {
    return (2*M_PI*r*h)+(2*M_PI*pow(r, 2));
}

int volume_cilindro (int r, int h) {
    return M_PI*pow(r, 2)*h;
}

int hipotenusa (int b, int c) {
    return pow(b, 2)+pow(c, 2);
}

int raiz_positiva (int a, int b, int c) {
    return (-b + abs(sqrt(pow(b, 2) - 4*a*c)))/(2*a);
}

int main (int argc, char *argv[]) {
    int a, b, c, r, h;
    std::cout << "Insira os valores: ";
    std::cin >> a >> b >> c >> r >> h;
    std::cout << media(a, b, c) << std::endl;
    std::cout << media_ponderada(a, b, c) << std::endl;
    std::cout << perimetro(r) << std::endl;
    std::cout << area_circulo(r) << std::endl;
    std::cout << area_triangulo(b, c) << std::endl;
    std::cout << area_caixa(a, b, c) << std::endl;
    std::cout << volume_caixa(a, b, c) << std::endl;
    std::cout << area_cilindro(r, h) << std::endl;
    std::cout << volume_cilindro(r, h) << std::endl;
    std::cout << hipotenusa(b, c) << std::endl;
    std::cout << raiz_positiva(a, b, c) << std::endl;

    return 0;
}