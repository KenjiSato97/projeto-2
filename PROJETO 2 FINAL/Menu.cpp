#include "Menu.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


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

void Menu::getMenuConsulta()
{
	int op=0;

	while (op != 8) {
		system("cls");
		printf("\n\n                        CONSULTA                           \n");
		printf("\n ****************************************************************");
		printf("\n *1-Imoveis disponiveis                                         *");
		printf("\n *2-Imoveis por tipo(casa,apartamento, terreno, flats e studios)*");
		printf("\n *3-Imoveis para vender por tipo                                *");
		printf("\n *4-Imoveis para alugar por tipo                                *");
		printf("\n *5-Imoveis para vender por bairro                              *");
		printf("\n *6-Imoveis para alugar por bairro                              *");
		printf("\n *7-Imoveis por cidade                                          *");
		printf("\n *8-Voltar                                                      *");
		printf("\n ****************************************************************");
		printf("\n Qual opcao voce deseja acessar? \n");
		cin >> op;
		cin.ignore();

		switch (op) {

		case 1:getImoveis();
			break;
		case 2:getImoveisTipo();
			break;
		case 3:getImoveisVTipo();
			break;
		case 4:getImoveisATipo();
			break;
		case 5:getImoveisVBTipo();
			break;
		case 6:getImoveisABTipo();
			break;
		case 7:getImoveisCTipo();
			break;

		}
		printf("%d", op);
	}
}

void Menu::getMenuGeral()
{
		printf("\n   qual imovel voce deseja consultar? \n");
		printf("\n  ********************************");
		printf("\n  *1-Casas                       *");
		printf("\n  *2-Apartamentos                *");
		printf("\n  *3-Terrenos                    *");
		printf("\n  *4-Flats                       *");
		printf("\n  *5-Studio                      *");
		printf("\n  *6-Voltar                      *");
		printf("\n  ********************************\n");
		printf("\nO que voce deseja consultar?\n");

}

void Menu::getImoveisTipo()
{
	int N = 0;

	while (N != 6) {
		int i;

		system("cls");

		getMenuGeral();

		cin >> N;
		cin.ignore();

		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			system("cls");
			for (i = 0; i < getO_Total(N - 1); i++)
			{
				getPrintImoveis(N, i);
			}
		}
		system("pause");
	}

}

void Menu::getImoveisVTipo()
{
	int N = 0;

	while (N != 6) {
		int i;

		system("cls");

		getMenuGeral();

		cin >> N;
		cin.ignore();

		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			system("cls");

			for (i = 0; i < getO_Total(N - 1); i++)
			{
				if (getO_venda(i, N) == "s" || getO_venda(i, N) == "S")
				{
					getPrintImoveis(N, i);
				}
			}
		}
		system("pause");
	}
}

void Menu::getImoveisATipo()
{
	{
		int N = 0;

		while (N != 6) {
			int i;

			system("cls");

			getMenuGeral();

			cin >> N;
			cin.ignore();

			if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
			{
				system("cls");

				for (i = 0; i < getO_Total(N - 1); i++)
				{
					if (getO_aluga(i, N) == "s" || getO_aluga(i, N) == "S")
					{
						getPrintImoveis(N, i);
					}
				}
			}
			system("pause");
		}
	}
}

void Menu::getImoveisVBTipo()
{
	int N = 0;

	while (N != 6) {
		int i;
		string str, str2;
		system("cls");

		getMenuGeral();

		cin >> N;
		cin.ignore();

		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			system("cls");
			cout << "por qual bairro deseja procurar?" << endl;
			getline(cin, str);

			for (i = 0; i < getO_Total(N - 1); i++)
			{
				str2 = getO_bairro(i, N);

				if ((getO_venda(i, N) == "s" || getO_venda(i, N) == "S" )&& (str.compare(str2) == 0))
				{
					getPrintImoveis(N, i);
				}
			}
		}
		system("pause");
	}
}

void Menu::getImoveisABTipo()
{
	int N = 0;

	while (N != 6) {
		int i;
		string str, str2;
		system("cls");

		getMenuGeral();

		cin >> N;
		cin.ignore();

		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			system("cls");
			cout << "por qual bairro deseja procurar?" << endl;
			getline(cin, str);

			for (i = 0; i < getO_Total(N - 1); i++)
			{
				str2 = getO_bairro(i, N);

				if ((getO_aluga(i, N) == "s" || getO_aluga(i, N) == "S") && (str.compare(str2) == 0))
				{
					getPrintImoveis(N, i);
				}
			}
		}
		system("pause");
	}
}

void Menu::getImoveisCTipo()
{
	int N = 0;

	while (N != 6) {
		int i;
		string str, str2;
		system("cls");

		getMenuGeral();

		cin >> N;
		cin.ignore();

		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			system("cls");
			cout << "por qual cidade deseja procurar?" << endl;
			getline(cin, str);

			for (i = 0; i < getO_Total(N - 1); i++)
			{
				str2 = getO_cidade(i, N);

				if (str.compare(str2) == 0)
				{
					getPrintImoveis(N, i);
				}
			}
		}
		system("pause");
	}
}
