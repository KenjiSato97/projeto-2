#include "Endereco.h"
#include<string>

endereco::endereco()
{

}

endereco::~endereco()
{

}
string endereco::getO_logradouro(int x, int y)
{
	return O_logradouro[x][y];
}
double endereco::getO_numero(int x, int y)
{
	return O_numero[x][y];
}
string endereco::getO_bairro(int x, int y)
{
	return O_bairro[x][y];
}
string endereco::getO_cidade(int x, int y)
{
	return O_cidade[x][y];
}
string endereco::getO_cep(int x, int y)
{
	return O_cep[x][y];
}
double endereco::getO_codigo(int x, int y)
{
	return O_codigo[x][y];
}



void endereco::setO_logradouro(string str, int x, int y)
{
	O_logradouro[x][y] = str;
}
void endereco::setO_numero(double N, int x, int y)
{
	O_numero[x][y] = N;
}
void endereco::setO_bairro(string str, int x, int y)
{
	O_bairro[x][y] = str;
}
void endereco::setO_cidade(string str, int x, int y)
{
	O_cidade[x][y] = str;
}
void endereco::setO_cep(string str, int x, int y)
{
	O_cep[x][y] = str;
}
void endereco::setO_codigo(double N, int x, int y)
{
	O_codigo[x][y] = N;
}
