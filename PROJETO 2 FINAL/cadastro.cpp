#include "cadastro.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>



using namespace std;

cadastro::cadastro()
{
}


cadastro::~cadastro()
{
}




void cadastro::setCadastra(int N)
{
    system("cls");
    string No, Str;
    double Nu;
    int e, i, u;
    cout << "quantos imoveis vc deseja cadastrar?" << endl;
    cin >> e;
    cin.ignore();
    u = e;
    e += getO_Total(N - 1);

	for (i = getO_Total(N-1); i < e; i++)
	{
		system("cls");
		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			cout << "digite o codigo do imovel: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_codigo(Nu,i, N);

			cout << "digite o logradouro: " << endl;
			getline(cin, No);
			setO_logradouro(No, i, N);

			cout << "digite o numero: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numero(Nu, i, N);

			cout << "digite o bairro: " << endl;
			getline(cin, No);
			setO_bairro(No, i, N);

			cout << "digite a cidade: " << endl;
			getline(cin, No);
			setO_cidade(No, i, N);

			cout << "digite o CEP: " << endl;
			getline(cin, No);
			setO_cep(No, i, N);

			cout << "Eh para alugar? s/n" << endl;
			getline(cin, No);
			setO_aluga(No, i, N);
			if (No == "s" || No == "S")
				{

					cout << "digite o preco do aluguel: " << endl;
					cin >> Nu;
					cin.ignore();
					setO_precoa(Nu, i, N);

				}else
				{
					setO_precoa(0, i, N);
				}


			cout << "Eh para vender? s/n" << endl;
			getline(cin, No);
			setO_venda(No, i, N);
				if (No == "s" || No == "S")
				{

					cout << "digite o preco de venda: " << endl;
					cin >> Nu;
					cin.ignore();
					setO_precov(Nu, i, N);

				}
				else
				{
					setO_precov(0, i, N);
				}

		}
		if (N == 4 || N == 5)
		{
			cout << "Possui ar condicionado? s/n" << endl;
			getline(cin, No);
			setO_ar(No, i, N);

			cout << "Possui internet? s/n" << endl;
			getline(cin, No);
			setO_net(No, i, N);

			cout << "Possui tv a cabo? s/n" << endl;
			getline(cin, No);
			setO_tv(No, i, N);

			cout << "Possui lavanderia? s/n" << endl;
			getline(cin, No);
			setO_lavanderia(No, i, N);

			cout << "Possui servico de limpeza? s/n" << endl;
			getline(cin, No);
			setO_limpeza(No, i, N);

			cout << "Possui recepcao 24hrs? s/n" << endl;
			getline(cin, No);
			setO_recep(No, i, N);


		}

		if (N == 1)
		{
			cout << "digite o numero de pavimentos: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numePavimentosc(Nu, i);

			cout << "digite o numero de quartos: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numQuartosc(Nu, i);

			cout << "digite a area do terreno: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaTerrenoc(Nu, i);

			cout << "digite a area construida: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaConstruidac(Nu, i);

		}
		if (N == 2)
		{
			cout << "digite a posicao: " << endl;
			getline(cin, No);
			setO_posicaoa(No, i);

			cout << "digite o numero de quartos: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numQuartosa(Nu, i);

			cout << "digite o andar: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_andara(Nu, i);

			cout << "digite o valor do condominio: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominioa(Nu, i);

			cout << "digite a quantidade de vagas na garagem: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_vagasGaragema(Nu, i);

			cout << "digite a area: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaa(Nu, i);

		}
		if (N == 3)
		{
			cout << "digite a area: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areat(Nu, i);
		}
		if (N == 4)
		{
			cout << "digite a area: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaf(Nu, i);

			cout << "digite o valor do condominio: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominiof(Nu, i);
		}
		if (N == 5)
		{
			cout << "digite a area: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areas(Nu, i);

			cout << "digite o valor do condominio: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominios(Nu, i);

			cout << "digite o andar: " << endl;
			cin >> Nu;
			cin.ignore();
			setO_andars(Nu, i);

			cout << "Possui piscina? s/n" << endl;
			getline(cin, No);
			setO_piscinas(No, i);

			cout << "Possui sauna? s/n" << endl;
			getline(cin, No);
			setO_saunas(No, i);

			cout << "Possui sala de ginastica? s/n" << endl;
			getline(cin, No);
			setO_ginasticas(No, i);
		}
	}
        setO_Total(u,N -1);



}

void cadastro::getImoveis()
{
	system("cls");

	cout << "Casas disponiveis: " << getO_Total(0) << endl;
	cout << "Apartamentos disponiveis : " << getO_Total(1) << endl;
	cout << "Terrenos disponiveis: " << getO_Total(2) << endl;
	cout << "Flats disponiveis: " << getO_Total(3) << endl;
	cout << "Studios disponiveis: " << getO_Total(4) << endl;
	system("pause");
}

void cadastro::getPrintImoveis(int N, int i)
{
	cout << "-------------------------------------------------------------" << endl;
		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			cout << "codigo do imovel: " << getO_codigo(i, N) << endl;


			cout << "logradouro: " << getO_logradouro(i, N) << endl;


			cout << "numero: " << getO_numero(i, N) << endl;


			cout << "bairro: " << getO_bairro(i, N) << endl;


			cout << "cidade: " << getO_cidade(i, N) << endl;


			cout << "CEP: " << getO_cep(i, N) << endl;


			cout << "alugar: " << getO_aluga(i, N) << endl;


			if (getO_aluga(i, N) == "s" || getO_aluga(i, N) == "S")
			{
				cout << "preco do aluguel: " << getO_precoa(i, N) << endl;
			}

			cout << "vender: " << getO_venda(i, N) << endl;

			if (getO_venda(i, N) == "s" || getO_venda(i, N) == "S")
			{
				cout << "digite o preco de venda: " << getO_precov(i, N) << endl;
			}

		}
		if (N == 4 || N == 5)
		{
			cout << "ar condicionado: " << getO_ar(i, N) << endl;

			cout << "internet: " << getO_net(i, N) <<endl;

			cout << "tv a cabo: " << getO_tv(i, N) << endl;

			cout << "lavanderia: " << getO_lavanderia(i, N) << endl;

			cout << "servico de limpeza: " << getO_limpeza(i, N) << endl;

			cout << "recepcao 24hrs: " << getO_recep(i, N) << endl;

		}

		if (N == 1)
		{
			cout << "pavimentos: " << getO_numePavimentosc(i) << endl;

			cout << "quartos: " << getO_numQuartosc(i) << endl;

			cout << "terreno: " << getO_areaTerrenoc(i) << endl;

			cout << "area construida: " << getO_areaConstruidac(i) << endl;

		}
		if (N == 2)
		{
			cout << "posicao: " << getO_posicaoa(i) << endl;

			cout << "numero de quartos: " << getO_numQuartosa(i) << endl;

			cout << "andar: " << getO_andara(i) << endl;

			cout << "valor do condominio: " << getO_valorCondominioa(i) << endl;

			cout << "quantidade de vagas na garagem: " << getO_vagasGaragema(i) << endl;

			cout << "area: " << getO_areaa(i) << endl;;


		}
		if (N == 3)
		{
			cout << "area: " << getO_areat(i) << endl;;

		}
		if (N == 4)
		{
			cout << "area: " << getO_areaf(i) << endl;;

			cout << "valor do condominio: " << getO_valorCondominiof(i) << endl;;

		}
		if (N == 5)
		{
			cout << "area: " << getO_areas(i) << endl;

			cout << "valor do condominio: " << getO_valorCondominios(i) << endl;

			cout << "andar: " << getO_andars(i) << endl;

			cout << "piscina? s/n" << getO_piscinas(i) << endl;

			cout << "sauna? s/n" << getO_saunas(i) << endl;

			cout << "sala de ginastica? s/n" << getO_ginasticas(i) << endl;

		}
		cout << "-------------------------------------------------------------" << endl;
}
