//Trabalho de AEDS I feito por Yanne Fernandes Cruz.

#include <stdio.h>
#include <stdlib.h>

typedef struct DATA
{
	int dia;
	int mes;
}DATA;


typedef struct LIVRO
{
    char nome[50];
	char autor[50];
	int edicao;
	struct LIVRO *prox_LIVRO;
}LIVRO;

typedef struct ALUNO
{
    char nome[50];
	char turno;
	int idade;
	struct ALUNO *prox_ALUNO;
}ALUNO;

typedef struct ALUGUEL
{
    LIVRO livro;
	ALUNO aluno;
	DATA data;
	struct ALUGUEL *prox_ALUGUEL;
}ALUGUEL;

void inic_listas(ALUGUEL *lista_aluguel, ALUNO *lista_aluno, LIVRO *lista_livro) {
	lista_aluguel = malloc(sizeof(ALUGUEL));
	lista_aluno = malloc(sizeof(ALUNO));
	lista_livro = malloc(sizeof(LIVRO));
    lista_aluguel -> prox_ALUGUEL;
    lista_aluno -> prox_ALUNO;
    lista_livro -> prox_LIVRO;
}

void menu(ALUGUEL *lista_aluguel, ALUNO *lista_aluno, LIVRO *lista_livro) {
	int op_menu = 0;
	while (op_menu != 4) { //Fica em looping no menu enquanto o usuário não digitar 4
		printf ("* Bem-vindo(a) ao sistema da biblioteca *\n");
		printf ("(1) - Aluguel\n""(2) - Livro\n""(3) - Aluno\n""(4) - Sair do menu principal\n");
		printf ("Escolha uma opcao: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_menu);
		if (op_menu == 1) {
			menu_aluguel(lista_aluguel);
		}
		if (op_menu == 2) {
			menu_livro(lista_livro);
		}
		if (op_menu == 3) {
			menu_aluno(lista_aluno);
		}
	}
}

void menu_aluguel(ALUGUEL *lista_aluguel) {
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Aluguel enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_aluguel(lista_aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_aluguel(lista_aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_aluguel(lista_aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_aluguel(lista_aluguel);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_aluguel(lista_aluguel);
			op_submenu = 0;
		}
	}
}

void menu_aluno(ALUNO *lista_aluno) {
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Aluno enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_aluno(lista_aluno);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_aluno(lista_aluno);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_aluno(lista_aluno);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_aluno(lista_aluno);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_aluno(lista_aluno);
			op_submenu = 0;
		}
	}
}

void menu_livro(LIVRO *lista_livro) {
	int op_submenu = 0;
	while (op_submenu != 6) { //Fica em looping no submenu de Livro enquanto o usuário não digitar 6
		printf ("(1) - Cadastro\n""(2) - Exclusao\n""(3) - Busca\n""(4) - Quantidade\n""(5) - Impressão\n""(6) - Voltar ao menu principal\n");
		printf ("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf ("%d", &op_submenu);
		if (op_submenu == 1) {
			cadastro_livro(lista_livro);
			op_submenu = 0;
		}
		if (op_submenu == 2) {
			exclusao_livro(lista_livro);
			op_submenu = 0;
		}
		if (op_submenu == 3) {
			busca_livro(lista_livro);
			op_submenu = 0;
		}
		if (op_submenu == 4) {
			quantidade_livro(lista_livro);
			op_submenu = 0;
		}
		if (op_submenu == 5) {
			impressao_livro(lista_livro);
			op_submenu = 0;
		}
	}
	
}

/////Funções da entidade aluguel/////
void cadastro_aluguel(ALUGUEL *lista_aluguel) {
	while (lista_aluguel -> prox_ALUGUEL != NULL) {
		lista_aluguel = lista_aluguel -> prox_ALUGUEL;
	}
	printf ("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(lista_aluguel->livro.nome, 50, stdin);
	printf ("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(lista_aluguel->aluno.nome, 50, stdin);
	printf ("Digite a data do aluguel (dd/mm): ");
	setbuf(stdin, NULL);
	scanf ("%d/%d", &lista_aluguel->data.dia, &lista_aluguel->data.mes);

}

void exclusao_aluguel(ALUGUEL *lista_aluguel) {
	LIVRO busca_livro;
	ALUNO busca_aluno;
	DATA busca_data;
	ALUGUEL *atual = lista_aluguel, *antecessor = NULL;
	printf("Digite o nome do livro: \n");
	fgets(busca_livro.nome, 50, stdin);
	printf("Digite o nome do aluno: \n");
	fgets(busca_aluno.nome, 50, stdin);
	while (lista_aluguel -> prox_ALUGUEL != NULL) {
		if (strcmp(busca_aluno, lista_aluguel->aluno.nome) == 0) {
			if (strcmp(busca_livro, lista_aluguel->livro.nome) == 0) {
				if (antecessor == NULL) {
					lista_aluguel = atual -> prox_ALUGUEL;
				}
				else {
					antecessor = atual -> prox_ALUGUEL;
				}
			}
		}
		else {
			antecessor = atual;
			atual = atual->prox_ALUGUEL;
		}
	}
	printf("Nenhum aluguel foi encontrado!\n");
}

void busca_aluguel(ALUGUEL *lista_aluguel) {

}

void quantidade_aluguel(ALUGUEL *lista_aluguel) {

}

void impressao_aluguel(ALUGUEL *lista_aluguel) {

}

/////Funções da entidade aluno/////
void cadastro_aluno(ALUNO *lista_aluno) {
	while (lista_aluno -> prox_ALUNO != NULL) {
		lista_aluno = lista_aluno -> prox_ALUNO;
	}
	printf ("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(lista_aluno->nome, 50, stdin);
	printf ("Digite o turno do aluno (M, V ou I): ");
	setbuf(stdin, NULL);
	scanf ("%c", &lista_aluno->turno);
	printf ("Digite a idade do aluno: ");
	setbuf(stdin, NULL);
	scanf ("%d", &lista_aluno->idade);
}

void exclusao_aluno(ALUNO *lista_aluno) {

}

void busca_aluno(ALUNO *lista_aluno) {

}

void quantidade_aluno(ALUNO *lista_aluno) {

}

void impressao_aluno(ALUNO *lista_aluno) {

}

/////Funções da entidade livro/////
void cadastro_livro(LIVRO *lista_livro) {
	while (lista_livro -> prox_LIVRO != NULL) {
		lista_livro = lista_livro -> prox_LIVRO;
	}
	printf ("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(lista_livro->nome, 50, stdin);
	printf ("Digite o nome do autor: ");
	setbuf(stdin, NULL);
	fgets(lista_livro->autor, 50, stdin);
	printf ("Digite o numero da edicao: ");
	setbuf(stdin, NULL);
	scanf ("%d", &lista_livro->edicao);
}

void exclusao_livro(LIVRO *lista_livro) {

}

void busca_livro(LIVRO *lista_livro) {

}

void quantidade_livro(LIVRO *lista_livro) {

}

void impressao_livro(LIVRO *lista_livro) {

}