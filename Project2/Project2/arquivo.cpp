#include "arquivo.h"
#include <fstream>
#include <string>

using namespace std;

arquivo::arquivo()
{
}


arquivo::~arquivo()
{
}


void arquivo::getO_Arquivo(double N)
{
	ofstream arq;

	if (N == 1) 
	{
		arq.open("cassa.txt",ios::app);
	}
	if (N == 2) 
	{
		arq.open("apartamento.txt");
	}
	if (N == 3)
	{
		arq.open("terreno.txt");
	}
	if (N == 4) 
	{
		arq.open("flat.txt");
	}
	if (N == 5)
	{
		arq.open("studio.txt");
	}

	if (N >= 1 && N < 5)
	{
		arq << getO_codigo();
		arq << getO_logradouro();
		arq << getO_numero();
		arq << getO_bairro();
		arq << getO_cidade();
		arq << getO_cep();
		arq << getO_precov();
		arq << getO_precoa();
		arq << getO_aluga();
		arq << getO_venda();

	}

	if (N == 4 || N == 5) 
	{
		arq << getO_ar();
		arq << getO_net();
		arq << getO_tv();
		arq << getO_lavanderia();
		arq << getO_limpeza();
		arq << getO_recep();

	}

	if (N == 1)
	{
		arq << getO_numePavimentosc();
		arq << getO_numQuartosc();
		arq << getO_areaTerrenoc();
		arq << getO_areaConstruidac();
		
	}

	if (N == 2)
	{
		arq << getO_posicaoa();
		arq << getO_numQuartosa();
		arq << getO_andara();
		arq << getO_valorCondominioa();
		arq << getO_vagasGaragema();
		arq << getO_areaa();

	}

	if (N == 3)
	{
		arq << getO_areat();
	}

	if (N == 4)
	{
		arq << getO_areaf();
		arq << getO_valorCondominiof();
	}

	if (N == 5)
	{
		arq << getO_areas();
		arq << getO_valorCondominios();
		arq << getO_andars();
		arq << getO_piscinas();
		arq << getO_saunas();
		arq << getO_ginasticas();
	}
	arq << "------------------------------------------";
	arq << "------------------------------------------";

	arq.close();
}