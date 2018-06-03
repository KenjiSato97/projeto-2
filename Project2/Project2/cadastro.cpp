#include "cadastro.h"
#include <iostream>
#include <string>



using namespace std;

cadastro::cadastro()
{
}


cadastro::~cadastro()
{
}



using namespace std;

void cadastro::setCadastra(int N)
{
	string No, Str;
	double Nu;
	int e, i;
	cout << "quantos imoveis vc deseja cadastrar?" << endl;
	cin >> e;
	cin.ignore();

	e += getO_Total(N - 1);

	for (i = getO_Total(N-1); i < e; i++)
	{
		if (N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
		{
			cout << "digite o codigo do imovel" << endl;
			cin >> Nu;
			cin.ignore();
			setO_codigo(Nu,i);

			cout << "digite o logradouro" << endl;
			getline(cin, No);
			setO_logradouro(No, i);

			cout << "digite o numero " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numero(Nu, i);

			cout << "digite o bairro" << endl;
			getline(cin, No);
			setO_bairro(No, i);

			cout << "digite a cidade" << endl;
			getline(cin, No);
			setO_cidade(No, i);

			cout << "digite o CEP" << endl;
			getline(cin, No);
			setO_cep(No, i);

			cout << "Eh para alugar? s/n" << endl;
			getline(cin, No);
			setO_aluga(No, i);
			if (No == "s" || No == "S") 
				{

					cout << "digite o preço do aluguel " << endl;
					cin >> Nu;
					cin.ignore();
					setO_precoa(Nu, i);

				}else
				{
					setO_precoa(0, i);
				}
			

			cout << "Eh para vender? s/n" << endl;
			getline(cin, No);
			setO_venda(No, i);
				if (No == "s" || No == "S")
				{

					cout << "digite o preço de venda " << endl;
					cin >> Nu;
					cin.ignore();
					setO_precov(Nu, i);

				}
				else
				{
					setO_precov(0, i);
				}
			
		}
		if (N == 4 || N == 5)
		{
			cout << "Possui ar condicionado? s/n" << endl;
			getline(cin, No);
			setO_ar(No, i);

			cout << "Possui internet? s/n" << endl;
			getline(cin, No);
			setO_net(No, i);

			cout << "Possui tv a cabo? s/n" << endl;
			getline(cin, No);
			setO_tv(No, i);

			cout << "Possui lavanderia? s/n" << endl;
			getline(cin, No);
			setO_lavanderia(No, i);

			cout << "Possui serviço de limpeza? s/n" << endl;
			getline(cin, No);
			setO_limpeza(No, i);

			cout << "Possui recepção 24hrs? s/n" << endl;
			getline(cin, No);
			setO_recep(No, i);


		}

		if (N == 1)
		{
			cout << "digite o numero de pavimentos" << endl;
			cin >> Nu;
			cin.ignore();
			setO_numePavimentosc(Nu, i);

			cout << "digite o numero de quartos " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numQuartosc(Nu, i);

			cout << "digite a area do terreno " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaTerrenoc(Nu, i);

			cout << "digite a area construida " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaConstruidac(Nu, i);

		}
		if (N == 2)
		{
			cout << "digite a posição" << endl;
			getline(cin, No);
			setO_posicaoa(No, i);

			cout << "digite o numero de quartos " << endl;
			cin >> Nu;
			cin.ignore();
			setO_numQuartosa(Nu, i);

			cout << "digite o andar " << endl;
			cin >> Nu;
			cin.ignore();
			setO_andara(Nu, i);

			cout << "digite o valor do condominio " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominioa(Nu, i);

			cout << "digite a quantidade de vagas na garagem " << endl;
			cin >> Nu;
			cin.ignore();
			setO_vagasGaragema(Nu, i);

			cout << "digite a area " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaa(Nu, i);

		}
		if (N == 3)
		{
			cout << "digite a area " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areat(Nu, i);
		}
		if (N == 4)
		{
			cout << "digite a area " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areaf(Nu, i);

			cout << "digite o valor do condominio " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominiof(Nu, i);
		}
		if (N == 5)
		{
			cout << "digite a area " << endl;
			cin >> Nu;
			cin.ignore();
			setO_areas(Nu, i);

			cout << "digite o valor do condominio " << endl;
			cin >> Nu;
			cin.ignore();
			setO_valorCondominios(Nu, i);

			cout << "digite o andar " << endl;
			cin >> Nu;
			cin.ignore();
			setO_andars(Nu, i);

			cout << "Possui piscina? s/n" << endl;
			getline(cin, No);
			setO_piscinas(No, i);

			cout << "Possui sauna? s/n" << endl;
			getline(cin, No);
			setO_saunas(No, i);

			cout << "Possui sala de gisnatica? s/n" << endl;
			getline(cin, No);
			setO_ginasticas(No, i);
		}
	}

	cout << "deseja salvar?(s/n)" << endl;

}
