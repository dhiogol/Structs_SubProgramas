#include <iostream>

using namespace std;


double vPIdeal(double altura, char sexo) {
    if (sexo == 'M' || sexo == 'm')
        return 72.7 * altura - 58;
    else if (sexo == 'F' || sexo == 'f')
        return 62.1 * altura - 44.7;
    else
        return 0;
}

int main() {
    double altura;
    char sexo;

    cout << "Digite a altura (em metros) e o sexo (M/F) \n";

    cout << "Altura : ";
    cin >> altura;
    cout << "Sexo : ";
    cin >> sexo;

    double peso = vPIdeal(altura, sexo);

    if (peso != 0)
        cout << "O peso ideal e : " << peso << " kg" << endl;
    else
        cout << "Sexo invalido." << endl;

    return 0;
}
