#include "header.h"	 //Trabalho de AEDS I feito por Yanne Fernandes Cruz.

void menu(ALUGUEL* lista_aluguel, ALUNO* lista_aluno, LIVRO* lista_livro) {
	int op_menu = 0;
	while (op_menu != 4) {	//Fica em looping no menu enquanto o usuário não digitar 4
		printf("* Bem-vindo(a) ao sistema da biblioteca *\n");
		printf(
			"(1) - Aluguel\n"
			"(2) - Livro\n"
			"(3) - Aluno\n"
			"(4) - Sair do menu principal\n");
		printf("Escolha uma opcao: ");
		setbuf(stdin, NULL);
		scanf("%d", &op_menu);
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

void menu_aluguel(ALUGUEL* lista_aluguel) {
	int op_submenu = 0;
	while (op_submenu != 6) {  //Fica em looping no submenu de Aluguel enquanto o usuário não digitar 6
		printf(
			"(1) - Cadastro\n"
			"(2) - Exclusao\n"
			"(3) - Busca\n"
			"(4) - Quantidade\n"
			"(5) - Impressão\n"
			"(6) - Voltar ao menu principal\n");
		printf("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf("%d", &op_submenu);
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

void menu_aluno(ALUNO* lista_aluno) {
	int op_submenu = 0;
	while (op_submenu != 6) {  //Fica em looping no submenu de Aluno enquanto o usuário não digitar 6
		printf(
			"(1) - Cadastro\n"
			"(2) - Exclusao\n"
			"(3) - Busca\n"
			"(4) - Quantidade\n"
			"(5) - Impressão\n"
			"(6) - Voltar ao menu principal\n");
		printf("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf("%d", &op_submenu);
		setbuf(stdin, NULL);
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

void menu_livro(LIVRO* lista_livro) {
	int op_submenu = 0;
	while (op_submenu != 6) {  //Fica em looping no submenu de Livro enquanto o usuário não digitar 6
		printf(
			"(1) - Cadastro\n"
			"(2) - Exclusao\n"
			"(3) - Busca\n"
			"(4) - Quantidade\n"
			"(5) - Impressão\n"
			"(6) - Voltar ao menu principal\n");
		printf("Selecione o que deseja fazer: ");
		setbuf(stdin, NULL);
		scanf("%d", &op_submenu);
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
void cadastro_aluguel(ALUGUEL* lista_aluguel) {
	while (lista_aluguel->prox_ALUGUEL != NULL) {
		lista_aluguel = lista_aluguel->prox_ALUGUEL;
	}
	printf("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(lista_aluguel->livro.nome, 50, stdin);
	printf("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(lista_aluguel->aluno.nome, 50, stdin);
	printf("Digite a data do aluguel (dd/mm): ");
	setbuf(stdin, NULL);
	scanf("%d/%d", &lista_aluguel->data.dia, &lista_aluguel->data.mes);
}

void exclusao_aluguel(ALUGUEL* lista_aluguel) {
	LIVRO busca_livro;
	ALUNO busca_aluno;
	DATA busca_data;
	ALUGUEL *atual = lista_aluguel, *antecessor = NULL;
	printf("Digite o nome do livro: \n");
	fgets(busca_livro.nome, 50, stdin);
	printf("Digite o nome do aluno: \n");
	fgets(busca_aluno.nome, 50, stdin);
	while (lista_aluguel->prox_ALUGUEL != NULL) {
		if (strcmp(busca_aluno.nome, lista_aluguel->aluno.nome) == 0) {
			if (strcmp(busca_livro.nome, lista_aluguel->livro.nome) == 0) {
				if (antecessor == NULL) {
					lista_aluguel = atual->prox_ALUGUEL;
				} else {
					antecessor = atual->prox_ALUGUEL;
				}
			}
		} else {
			antecessor = atual;
			atual = atual->prox_ALUGUEL;
		}
	}
	printf("Nenhum aluguel foi encontrado!\n");
}

void busca_aluguel(ALUGUEL* lista_aluguel) {
}

void quantidade_aluguel(ALUGUEL* lista_aluguel) {
}

void impressao_aluguel(ALUGUEL* lista_aluguel) {
}

/////Funções da entidade aluno/////
void cadastro_aluno(ALUNO* lista_aluno) {
	ALUNO* aux_lista = lista_aluno;

	while (aux_lista->prox_ALUNO != NULL) {
		aux_lista = aux_lista->prox_ALUNO;
	}

	printf("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(aux_lista->nome, 50, stdin);
	printf("Digite o turno do aluno (M, V ou I): ");
	setbuf(stdin, NULL);
	scanf("%c", &aux_lista->turno);
	printf("Digite a idade do aluno: ");
	setbuf(stdin, NULL);
	scanf("%d", &aux_lista->idade);
	setbuf(stdin, NULL);
	aux_lista->prox_ALUNO = malloc(sizeof(ALUNO));
	aux_lista = aux_lista->prox_ALUNO;
	aux_lista->prox_ALUNO = NULL;
}

void exclusao_aluno(ALUNO* lista_aluno) {
}

void busca_aluno(ALUNO* lista_aluno) {
}

void quantidade_aluno(ALUNO* lista_aluno) {
}

void impressao_aluno(ALUNO* lista_aluno) {
}

/////Funções da entidade livro/////
void cadastro_livro(LIVRO* lista_livro) {
	while (lista_livro->prox_LIVRO != NULL) {
		lista_livro = lista_livro->prox_LIVRO;
	}
	printf("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(lista_livro->nome, 50, stdin);
	printf("Digite o nome do autor: ");
	setbuf(stdin, NULL);
	fgets(lista_livro->autor, 50, stdin);
	printf("Digite o numero da edicao: ");
	setbuf(stdin, NULL);
	scanf("%d", &lista_livro->edicao);
}

void exclusao_livro(LIVRO* lista_livro) {
}

void busca_livro(LIVRO* lista_livro) {
}

void quantidade_livro(LIVRO* lista_livro) {
}

void impressao_livro(LIVRO* lista_livro) {
}
