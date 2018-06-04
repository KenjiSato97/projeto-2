#include "Menu.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>



using namespace std;

int main()
{
	int op = 0;

	Menu c;

	while (op != 3) {
		system("cls");
		printf("\n\n            MENU \n            ");
		printf("\n\n  **************************\n");
		printf("  **1 cadastrar imoveis   **\n");
		printf("  **2 consultar imoveis   **\n");
		printf("  **      3 SAIR          **\n");
		printf("  **************************\n");
		printf("\nQual opcao voce deseja acessar?\n ");

		cin >> op;
		cin.ignore();

		switch (op) {
		case 1:c.getMenuCadastro();
			break;
		case 2:c.getMenuConsulta();
			break;
		}
	}
	system("cls");
	printf("  **************************\n");
	printf("  *      VOLTE SEMPRE      *\n");
	printf("  **************************\n");
	return 0;
}
