//Trabalho de AEDS I feito por Yanne Fernandes Cruz.

#include <stdio.h>
#include <stdlib.h>

typedef struct livro
{
    char nome[50];
	char autor[50];
	int edicao;
}livro;

typedef struct aluguel
{
    struct livro livro;
	struct aluno aluno;
	int dia;
	int mes;
}aluguel;

typedef struct aluno
{
    char nome[50];
	char turno;
	int idade;
}aluno;

int menu(void) {
	int op_menu = 0;
	while (op_menu != 4) { //Fica em looping no menu enquanto o usuário não digitar 4
		printf ("* Bem-vindo(a) ao sistema da biblioteca *\n");
		printf ("(1) - Aluguel\n""(2) - Livro\n""(3) - Aluno\n""(4) - Sair do menu principal\n");
		printf ("Escolha uma opcao: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_menu);
		if (op_menu == 1) {
			menu_aluguel();
		}
		if (op_menu == 2) {
			menu_livro();
		}
		if (op_menu == 3) {
			menu_aluno();
		}
	}
}

void menu_aluguel(void) {
	aluguel *aluguel;
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Aluguel enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_aluguel(aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_aluguel(aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_aluguel(aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_aluguel(aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_aluguel(aluguel);
			op_submenu = 0;
		}
	}

void menu_aluno(aluno) {
	aluno *aluno;
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Aluno enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_aluno(aluno);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_aluno(aluno);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_aluno(aluno);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_aluno(aluno);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_aluno(aluno);
			op_submenu = 0;
		}
	}
}

void menu_livro(void) {
	livro *livro;
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Livro enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_livro(livro);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_livro(livro);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_livro(livro);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_livro(livro);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_livro(livro);
			op_submenu = 0;
		}
	}
	
}

/////Funções da entidade aluguel/////
void cadastro_aluguel(aluguel *aluguel) {
	printf ("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	gets(aluguel.livro.nome);
	aluguel = malloc((aluguel.livro.nome) * sizeof(char));
	printf ("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	gets(aluguel.aluno.nome);
	aluguel = malloc((aluguel.aluno.nome) * sizeof(char));
	printf ("Digite a data do aluguel (dd/mm): ");
	setbuf(stdin, NULL);
	scanf ("%d/%d", &aluguel.dia, &aluguel.mes);
}

void exlusao_aluguel(void) {

}

void busca_aluguel(void) {

}

void quantidade_aluguel(void) {

}

void impressao_aluguel(void) {

}

/////Funções da entidade aluno/////
void cadastro_aluno(aluno *aluno) {
	printf ("Digite a inicial do aluno: ");
	setbuf(stdin, NULL);
	scanf ("%c", &aluno_nome);
	printf ("Digite o turno do aluno (M, V ou I): ");
	setbuf(stdin, NULL);
	scanf ("%c", &aluno_turno);
	printf ("Digite a idade do aluno: ");
	setbuf(stdin, NULL);
	scanf ("%d", &aluno_idade);
}

void exlusao_aluno(void) {

}

void busca_aluno(lista_aluno) {

}

void quantidade_aluno(lista_aluno) {

}

void impressao_aluno(lista_aluno) {

}

/////Funções da entidade livro/////
void cadastro_livro(lista_livro) {

}

void exlusao_livro(lista_livro) {

}

void busca_livro(lista_livro) {

}

void quantidade_livro(lista_livro) {

}

void impressao_livro(lista_livro) {

}