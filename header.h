#ifndef TP_H
#define TP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DATA {
	int dia;
	int mes;
} DATA;

typedef struct LIVRO {
	char nome[50];
	char autor[50];
	int edicao;
	struct LIVRO* prox_LIVRO;
} LIVRO;

typedef struct ALUNO {
	char nome[50];
	char turno;
	int idade;
	struct ALUNO* prox_ALUNO;
} ALUNO;

typedef struct ALUGUEL {
	LIVRO livro;
	ALUNO aluno;
	DATA data;
	struct ALUGUEL* prox_ALUGUEL;
} ALUGUEL;

void menu(ALUGUEL* lista_aluguel, ALUNO* lista_aluno, LIVRO* lista_livro);
void menu_aluguel(ALUGUEL* lista_aluguel);
void menu_aluno(ALUNO* lista_aluno);
void menu_livro(LIVRO* lista_livro);
void cadastro_aluguel(ALUGUEL* lista_aluguel);
void exclusao_aluguel(ALUGUEL* lista_aluguel);
void busca_aluguel(ALUGUEL* lista_aluguel);
void quantidade_aluguel(ALUGUEL* lista_aluguel);
void impressao_aluguel(ALUGUEL* lista_aluguel);
void cadastro_aluno(ALUNO* lista_aluno);
void exclusao_aluno(ALUNO* lista_aluno);
void busca_aluno(ALUNO* lista_aluno);
void quantidade_aluno(ALUNO* lista_aluno);
void impressao_aluno(ALUNO* lista_aluno);
void cadastro_livro(LIVRO* lista_livro);
void exclusao_livro(LIVRO* lista_livro);
void busca_livro(LIVRO* lista_livro);
void quantidade_livro(LIVRO* lista_livro);
void impressao_livro(LIVRO* lista_livro);

#endif
