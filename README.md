# Sistema de Cadastro de Alunos

Sistema em C++ para cadastro de alunos com cálculo de média e status de aprovação.

## Funcionalidades

- Cadastro de múltiplos alunos
- Registro de matrícula, nome e três notas
- Cálculo automático da média
- Exibição do resultado (Aprovado / Reprovado)

## Estrutura

```
Sistema-Cadastro-Alunos/
├── include/
│   └── Aluno.h
├── src/
│   ├── Aluno.cpp
│   └── main.cpp
└── README.md
```

## Como compilar e executar

```bash
g++ -Iinclude src/Aluno.cpp src/main.cpp -o sistema

./sistema
```

## Requisitos

- Compilador C++ (g++ ou equivalente)
- C++11 ou superior
