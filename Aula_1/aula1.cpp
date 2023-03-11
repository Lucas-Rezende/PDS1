//Lista 1 - Estruturas básicas

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main (int argc, char *argv[])
{
  int a, b, c, d;

  //QUESTÃO 1

  /*std::cout << "QUESTÃO 1" << std::endl;
  std::cout << 3+4 << std::endl;
  std::cout << 7/4 << std::endl;
  std::cout << pow(3,2) << std::endl;
  std::cout << (5*3)*(2*1) << std::endl;
  std::cout << (2*5)-2 << std::endl;
  std::cout << (2+5)*3 << std::endl;
  std::cout << sinl(M_PI) << std::endl;
  std::cout << sqrt(5) << std::endl;
  std::cout << 1+2+3 << std::endl;
  std::cout << 1*2*3 << std::endl;
  std::cout << (1+2+3)/3 << std::endl;
  std::cout << (2+4)*(3-1) << std::endl;
  std::cout << (9/3)+(3*2) << std::endl;
  std::cout << sin(4.5)+cos(3.7) << std::endl;
  std::cout << log(2.3)-log(3.1) << std::endl;
  std::cout << log(7)+(log(7)*log(7)-cos(log(7))) << std::endl;
  std::cout << (10*3+8*4)/50.3 - (10.3+8.4) << std::endl;
  std::cout << (cos(0.8)+sin(0.8)) * (cos(0.8)-sin(0.8)) << std::endl;*/

  //QUESTÃO 2

  std::cout << "QUESTÃO 2" << std::endl;
  std::cout << "Digite os valores a, b, c e d respectivamente: ";
  std::cin >> a >> b >> c >> d;
  /*std::cout << a+b << std::endl;
  std::cout << a/c << std::endl;
  std::cout << pow(a, 2) << std::endl;
  std::cout << b*c << std::endl;
  std::cout << a*b-c << std::endl;
  std::cout << a + b * c << std::endl;
  std::cout << sin(a) << std::endl;
  std::cout << sqrt(b) << std::endl;
  std::cout << a+b+c << std::endl;
  std::cout << a*b*c << std::endl;
  std::cout << (a+b+c)/d << std::endl;
  std::cout << (a+b)*(a-d) << std::endl;
  std::cout << (b/c)+(a*d) << std::endl;
  std::cout << sin(b) + cos(c) << std::endl;
  std::cout << log(a) - log(c) << std::endl;
  std::cout << log(a) + (log(b)*log(d)-cos(log(c))) << std::endl;
  std::cout << (b+a)/c - (d+a) << std::endl;
  std::cout << (cos(d)+sin(c)*(cos(b)-sin(a))) << std::endl;*/

  //QUESTÃO 3
  std::cout << "\nQUESTÃO 3" << std::endl;
  std::cout << "\nMedia            : " << (a+b+c)/3 << std::endl;
  std::cout << "\nMedia ponderada  : " << ((a*3)+(b*4)+(c*5))/12 << std::endl;
  std::cout << "\nPerimetro (circ.): " << 2*M_PI*a << std::endl;
  std::cout << "\nArea (triang.)   : " << (b*c)/2 << std::endl;
  std::cout << "\nHipotenusa       : " << pow(b, 2) + pow(c, 2) << std::endl;
  std::cout << "\nRaizes 1 e 2     : " << (-b + sqrt(pow(b, 2)-4*a*c))/2*a << " e " << (-b - sqrt(pow(b, 2)-4*a*c))/2*a << std::endl;
  
  return 0;
}
