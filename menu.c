#include "header.h"
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
			buscar_aluguel(lista_aluguel);
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
			buscar_aluno(lista_aluno);
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
			buscar_livro(lista_livro);
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
