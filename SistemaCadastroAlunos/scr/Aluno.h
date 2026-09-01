#ifndef ALUNO_H
#define ALUNO_H
#include <string>

class Aluno {
private:
    std::string nome;
    int matricula;
    double nota1;
    double nota2;
    double nota3;

public:
    void cadastrar();
    double calcularMedia();
    void mostrarResultado();
};

#endif