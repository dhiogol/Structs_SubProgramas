#include <iostream>

using namespace std;


int maiorValor(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;

    cout << "Digite tres valores\n";

    cout << "Valor 1: "; cin >> num1;
    cout << "Valor 2: "; cin >> num2;
    cout << "Valor 3: "; cin >> num3;

    int maior = maiorValor(num1, num2, num3);

    cout << "O maior valor e: " << maior << endl;

    return 0;
}

