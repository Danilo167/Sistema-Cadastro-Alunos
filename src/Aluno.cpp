#include <iostream>
#include <iomanip>
#include "Aluno.h"

void Aluno::cadastrar() {
	std::cout << "\n";

	std::cout << " • Matricula: ";
	std::cin >> matricula;
	std::cin.ignore();

	std::cout << " • Nome do aluno: ";
	std::getline(std::cin, nome);

	std::cout << " • Primeira nota: ";
	std::cin >> nota1;

	std::cout << " • Segunda nota: ";
	std::cin >> nota2;

	std::cout << " • Terceira nota: ";
	std::cin >> nota3;
}

double Aluno::calcularMedia() {
	return (nota1 + nota2 + nota3) / 3;
}

void Aluno::mostrarResultado() {
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\n " << matricula << " | " << nome;
	std::cout << " | Media: " << calcularMedia();

	if (calcularMedia() >= 7) {
		std::cout << " | [ Aprovado ]\n";
	} else {
		std::cout << " | [ Reprovado ]\n";
	}
}
