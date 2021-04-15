//Trabalho de AEDS I feito por Yanne Fernandes Cruz.

#include "header.h"

void main() {
	ALUGUEL* lista_aluguel = malloc(sizeof(ALUGUEL));
	ALUNO* lista_aluno = malloc(sizeof(ALUNO));
	LIVRO* lista_livro = malloc(sizeof(LIVRO));
	menu(lista_aluguel, lista_aluno, lista_livro);
}
