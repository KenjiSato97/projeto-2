#include "Menu.h"
#include < iostream>


using namespace std;

Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::getMenuCadastro()
{
	int op=0;

	while (op != 6) {
		system("cls");
		printf("\n\n        CADASTRAR             \n");
		printf("\n  ********************************\n");
		printf("  *  1-cadastrar casa            *\n");
		printf("  *  2-cadastrar apartamento     *\n");
		printf("  *  3-cadastrar terreno         *\n");
		printf("  *  4-cadastrar flat            *\n");
		printf("  *  5-cadastrar studio          *\n");
		printf("  *  6-voltar                    *\n");
		printf("  ********************************\n");
		printf("Qual opcao voce deseja acessar?\n ");
		cin >> op;
		cin.ignore();

		
		if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5)
		{
			setCadastra(op);
		}
		
	}
}
