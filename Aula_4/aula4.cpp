#include <iostream>
#include <cmath>

int fat(int n) {
    if (n > 0) {
        return n * fat(n-1);
    } else {
        return 1;
    }
}

int mdc(int a, int b) {
    if (a==0) return b;
    if (b==0) return a;
    if (a>b) return mdc(a%b, b);
    return mdc(a, b%a);
}

int mdc3(int a, int b, int c) {
    if (c==0) return 0;
    return mdc(mdc(a, b), c);
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}

int primo(int x, int i = 2) {
    if (x <= 2) {
        return 1;
    }
    if (x % i == 0) {
        return 0;
    }
    if (i * i > x) {
        return 1;
    }
    return primo(x, i + 1);
}

int decrescente(int x) {
    if (x < 1) return 0;
    else std::cout << x << " ";
    return decrescente(x-1);
}

int res(int a, int b) {
    if (a < b) {
        return a;
    }
    return res(a - b, b);
}

int form(int n) {
    if (n == 1) {
        return 1;
    } else {
        return form(n-1) + n*n;
    }
}

int mmc(int a, int b) {
    int resultado = (a * b) / mdc(a, b);
    return resultado;
}

int divi (int a, int b) {
    if (a<b) return 0;
    return 1 + divi(a-b, b);
}

double raiz(int n, double low, double high) {
    if (high - low < 0.001) {
        return (low + high) / 2;
    }
    
    double mid = (low + high) / 2;
    
    if (mid * mid > n) {
        return round(raiz(n, low, mid));
    }
    
    else if (mid * mid < n) {
        return round(raiz(n, mid, high));
    }
    
    else {
        return round(mid);
    }
}

int dig(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + dig(n / 10);
    }
}

int exp(int k, int n) {
    if (n == 0) return 1;
    if (k == 0) return 0;
    else return k * exp(k, n-1);
}

void crescente(double x, int max) {
  if (x > max) {
    return;
  }
  else {
    std::cout << x << " ";
    crescente(x + 1, max);
  }
}

int main(int argc, char *argv[]) {
    int a, b, c, n, k, max;
    double x, low, high;
    std::cin >> a >> b >> c >> n >> k >> x;
    std::cout << "Fatorial de " << n << ": " << fat (n) << std::endl;
    std::cout << "MMC de " << a << " e " << b << ": " << mdc (a, b) << std::endl;
    std::cout << "MMC de " << a << ", " << b << " e " << c << ": " << mdc3 (a, b, c) << std::endl;
    std::cout << n << "-ésimo termo de fibonacci: " << fib (n) << std::endl;
    if (primo(x) == 1) {
        std::cout << "O número " << x << " é primo" << std::endl;
    } else {
        std::cout << "O número " << x << " não é primo" << std::endl;
    }
    std::cout << "Valores descrescentes de " << x << ": " << decrescente(x) << std::endl;
    std::cout << "O resto da divisão entre " << a << " e " << b << " é " << res (a, b) << std::endl;
    std::cout << "i*i = " << form(n) << std::endl;
    std::cout << "mmc = " << mmc(a, b) << std::endl;
    std::cout << "div = " << divi(a, b) << std::endl;
    std::cout << "raiz = " << raiz(n, 0, n) << std::endl;
    std::cout << "soma dos digitos = " << dig(n) << std::endl;
    std::cout << "exponencial = " << exp(k, n) << std::endl;
    std::cout << "Valores crescentes de " << x << ": ";
    crescente(1, x);


    return 0;
}