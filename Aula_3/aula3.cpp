#include <iostream>

int max (int a, int b, int c) {
    if (a > b && a > c)
    {
        return a;
    } else if (b > c)
    {
        return b;
    } else
    {
        return c;
    }  
}

int min (int a, int b, int c) {
    if (a < b && a < c)
    {
        return a;
    } else if (b < c)
    {
        return b;
    } else
    {
        return c;
    }  
}

bool par (int x) {
    if (x % 2 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}

bool fora (int x, int y, int z) {
    if (x >= y && x <= z) {
        return 1;
    } else
    {
        return 0;
    }   
}

bool bissexto (int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        return 1;
    } else
    {
        return 0;
    }
}

bool divisivel (int x, int y) {
    if (x % y == 0) {
        return 1;
    } else
    {
        return 0;
    }
    
}

int main (int argc, char *argv[]) {
    int a, b, c, x, y, z, ano;
    std::cin >> a >> b >> c >> x >> y >> z >> ano;

    std::cout << "Maior valor: " << max (a, b, c) << std::endl;
    std::cout << "Menor valor: " << min (a, b, c) << std::endl;

    if (par(x) == 1)
    {
        std::cout << "O valor " << x << " e par" << std::endl;
    } else
    {
        std::cout << "O valor " << x << " nao e par" << std::endl;
    }

    if (fora(x, y, z) == 1)
    {
        std::cout << "O valor " << x << " pertence ao intervalo [" << y << ", " << z << "]" << std::endl;
    } else
    {
        std::cout << "O valor " << x << " nao pertence ao intervalo [" << y << ", " << z << "]" << std::endl;
    }

    if (bissexto(ano) == 1)
    {
        std::cout << "O ano " << ano << " e bissexto" << std::endl;
    } else
    {
        std::cout << "O ano " << ano << " nao e bissexto" << std::endl;
    }

    if (divisivel(x, y) == 1)
    {
        std::cout << x << " e divisivel por " << y << std::endl;
    } else
    {
        std::cout << x << " nao e divisivel por " << y << std::endl;
    }

    return 0;
}