#include <iostream>
#include <vector>
#include "Aluno.h"

int main() {
    std::vector<Aluno> alunos;
    int quantidade;

    std::cout << "Digite a quantidade de alunos: ";
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        std::cout << "\n Aluno " << i + 1 << "\n";
        Aluno aluno;
        aluno.cadastrar();
        alunos.push_back(aluno);
    }

    for (int i = 0; i < alunos.size(); i++) {
        alunos[i].mostrarResultado();
    }
    return 0;
}
