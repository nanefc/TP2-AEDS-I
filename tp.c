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
	lista_aluguel->prox_ALUGUEL = malloc(sizeof(ALUGUEL));
	lista_aluguel = lista_aluguel->prox_ALUGUEL;
	lista_aluguel->prox_ALUGUEL = NULL;
}

void busca_aluguel(ALUGUEL* lista_aluguel) {
	char nome1[50], nome2[50];
	ALUGUEL *aux = lista_aluguel, busca_aluguel;
	printf("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(busca_aluguel.livro.nome, 50, stdin);
	printf("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(busca_aluguel.aluno.nome, 50, stdin);
	while (aux != NULL) {
		strcpy(nome1, aux->aluno.nome);
		strcpy(nome2, aux->livro.nome);
		printf("Yanne1");
		if (strcmp(nome1, busca_aluguel.aluno.nome) == 0) {
			printf("Yanne2");
			if (strcmp(nome2, busca_aluguel.livro.nome) == 0) {
				printf("Yanne3");
				printf("O aluguel do livro %s pelo aluno %s foi encontrado!\n", busca_aluguel.livro.nome, busca_aluguel.aluno.nome);
				break;
			}
		}
		else {
			printf("Yanne4");
			aux = aux->prox_ALUGUEL;
		}
	}
	printf("Nenhum resultado foi encontrado!\n");
}

void exclusao_aluguel(ALUGUEL* lista_aluguel) {
	ALUGUEL busca_aluguel;
	ALUGUEL *atual = lista_aluguel, *antecessor;
	printf("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(busca_aluguel.livro.nome, 50, stdin);
	printf("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(busca_aluguel.aluno.nome, 50, stdin);
	while (lista_aluguel != NULL) {
		printf("Yanne1");
		if (strcmp(busca_aluguel.aluno.nome, lista_aluguel->aluno.nome) == 0) {
			printf("Yanne2");
			if (strcmp(busca_aluguel.livro.nome, lista_aluguel->livro.nome) == 0) {
				antecessor->prox_ALUGUEL = atual->prox_ALUGUEL;
				return;
			}
		} 
		printf("Yanne3");
		antecessor = atual;
		atual = atual->prox_ALUGUEL;
	}
	printf("Nenhum aluguel foi encontrado!\n");
}

void quantidade_aluguel(ALUGUEL* lista_aluguel) {
	ALUGUEL *aux = lista_aluguel;
	int i = 0;
	while (aux->prox_ALUGUEL != NULL) {
		i++;
		aux = aux->prox_ALUGUEL;
	}
	printf("Quantidade: %d\n", i);
}

void impressao_aluguel(ALUGUEL* lista_aluguel) {
	ALUGUEL *aux = lista_aluguel;
	while (aux->prox_ALUGUEL != NULL) {
		printf("Nome do livro:%sNome do aluno: %sData: %d/%d\n\n", aux->livro.nome, aux->aluno.nome, aux->data.dia, aux->data.mes);
		aux = aux->prox_ALUGUEL;
	}
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
	lista_aluno->prox_ALUNO = malloc(sizeof(ALUNO));
	lista_aluno = lista_aluno->prox_ALUNO;
	lista_aluno->prox_ALUNO = NULL;
}

void exclusao_aluno(ALUNO* lista_aluno) {
}

void busca_aluno(ALUNO* lista_aluno) {
	char nome1[50], nome2[50];
	ALUNO *aux = lista_aluno, busca_aluno;
	printf("Digite o nome do aluno: ");
	setbuf(stdin, NULL);
	fgets(busca_aluno.nome, 50, stdin);
	printf("Digite a idade do aluno: ");
	setbuf(stdin, NULL);
	scanf("%d", &busca_aluno.idade);
	while (aux != NULL) {
		strcpy(nome1, aux->nome);
		//strcpy(nome2, aux->idade);
		printf("Yanne1");
		if (strcmp(nome1, busca_aluno.nome) == 0) {
			printf("Yanne2");
			if (lista_aluno->idade == busca_aluno.idade) {
				printf("Yanne3");
				printf("O aluno %s foi encontrado!\n", busca_aluno.nome);
				break;
			}
		}
		else {
			printf("Yanne4");
			aux = aux->prox_ALUNO;
		}
	}
	printf("Nenhum resultado foi encontrado!\n");
}

void quantidade_aluno(ALUNO* lista_aluno) {
	ALUNO *aux = lista_aluno;
	int i = 0;
	while (aux->prox_ALUNO != NULL) {
		i++;
		aux = aux->prox_ALUNO;
	}
	printf("Quantidade: %d\n", i);
}

void impressao_aluno(ALUNO* lista_aluno) {
	ALUNO *aux = lista_aluno;
	while (aux->prox_ALUNO != NULL) {
		if (aux->turno == 'm' || aux->turno == 'M') {
			printf("Nome:%sIdade: %d\nTurno: Matutino\n", aux->nome, aux->idade);
		}
		else if (aux->turno == 'V' || aux->turno == 'v') {
			printf("Nome:%sIdade: %d\nTurno: Vespertino\n", aux->nome, aux->idade);
		}
		else if (aux->turno == 'I' || aux->turno == 'i') {
			printf("Nome:%sIdade: %d\nTurno: Integral\n", aux->nome, aux->idade);
		}
		aux = aux->prox_ALUNO;
	}
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
	lista_livro->prox_LIVRO = malloc(sizeof(LIVRO));
	lista_livro = lista_livro->prox_LIVRO;
	lista_livro->prox_LIVRO = NULL;
}

void exclusao_livro(LIVRO* lista_livro) {
}

void busca_livro(LIVRO* lista_livro) {
	char nome1[50], nome2[50];
	LIVRO *aux = lista_livro, busca_livro;
	printf("Digite o nome do livro: ");
	setbuf(stdin, NULL);
	fgets(busca_livro.nome, 50, stdin);
	printf("Digite o nome do autor: ");
	setbuf(stdin, NULL);
	fgets(busca_livro.autor, 50, stdin);
	printf("Digite o numero da edicao: ");
	scanf("%d", &busca_livro.edicao);
	while (aux != NULL) {
		strcpy(nome1, aux->nome);
		strcpy(nome2, aux->autor);
		printf("Yanne1");
		if (strcmp(nome1, busca_livro.nome) == 0) {
			printf("Yanne2");
			if (strcmp(nome2, busca_livro.autor) == 0) {
				printf("Yanne3");
				if (aux->edicao == busca_livro.edicao) {
					printf("Yanne4");
					printf("O livro %s foi encontrado!\n", busca_livro.nome);
					break;
				}
			}
		}
		else {
			printf("Yanne5");
			aux = aux->prox_LIVRO;
		}
	}
	printf("Nenhum resultado foi encontrado!\n");
}

void quantidade_livro(LIVRO* lista_livro) {
	LIVRO *aux = lista_livro;
	int i = 0;
	while (aux->prox_LIVRO != NULL) {
		i++;
		aux = aux->prox_LIVRO;
	}
	printf("Quantidade: %d\n", i);
}

void impressao_livro(LIVRO* lista_livro) {
	LIVRO *aux = lista_livro;
	while (aux->prox_LIVRO != NULL) {
		printf("Nome:%sAutor: %sEdicao: %d\n\n", aux->nome, aux->autor, aux->edicao);
		aux = aux->prox_LIVRO;
	}
}
