#include <iostream>

using namespace std;


int calcularAnos() {
    int anos = 0;
    double populacaoA = 90000000, populacaoB = 200000000;
    double taxaCrescimentoA = 0.03, taxaCrescimentoB = 0.015;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    return anos;
}

int main() {
    int vAnos = calcularAnos();

    cout << "Sao necessarios " << vAnos << " anos para a populacao do pais A ultrapassar ou igualar a do pais B." << endl;

    return 0;
}
