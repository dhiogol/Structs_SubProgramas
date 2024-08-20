#include <iostream>

using namespace std;


int calcularIdadeEmDias(int anos, int meses, int dias) {
    return (anos * 365) + (meses * 30) + dias;
}

int main() {
    int anos, meses, dias;

    cout << "Digite sua idade (anos, meses, dias): \n";

    cout << "Anos : ";
    cin >> anos;
    cout << "Meses : ";
    cin >> meses;
    cout << "Dias : ";
    cin >> dias;

    int idadeDias = calcularIdadeEmDias(anos, meses, dias);

    cout << "\nIdade em dias igual a : " << idadeDias << " dias." << endl;

    return 0;
}
