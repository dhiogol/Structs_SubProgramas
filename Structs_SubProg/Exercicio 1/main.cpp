#include <iostream>
#include <cstring>

using namespace std;


struct Aluno {
    int vMat;
    char nome[100];
};

int main() {
    Aluno alunos[50];
    int quantidade;

    cout << "Quantos alunos deseja cadastrar (maximo 50)? ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        cout << "\nDigite a matricula do aluno " << i + 1 << ": ";
        cin >> alunos[i].vMat;
        cin.ignore();
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin.getline(alunos[i].nome, 100);
    }

    cout << "\nDados dos alunos cadastrados:\n";
    for (int i = 0; i < quantidade; ++i) {
        cout << "Matricula : " << alunos[i].vMat << " | Nome : " << alunos[i].nome << endl;
    }

    return 0;
}

