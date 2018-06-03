#include "Endereco.h"
#include<string>

endereco::endereco()
{

}

endereco::~endereco()
{

}
string endereco::getO_logradouro(int x)
{
	return O_logradouro[x];
}
double endereco::getO_numero(int x)
{
	return O_numero[x];
}
string endereco::getO_bairro(int x)
{
	return O_bairro[x];
}
string endereco::getO_cidade(int x)
{
	return O_cidade[x];
}
string endereco::getO_cep(int x)
{
	return O_cep[x];
}
double endereco::getO_codigo(int x)
{
	return O_codigo[x];
}



void endereco::setO_logradouro(string str, int x)
{
	O_logradouro[x] = str;
}
void endereco::setO_numero(double N, int x)
{
	O_numero[x] = N;
}
void endereco::setO_bairro(string str, int x)
{
	O_bairro[x] = str;
}
void endereco::setO_cidade(string str, int x)
{
	O_cidade[x] = str;
}
void endereco::setO_cep(string str, int x)
{
	O_cep[x] = str;
}
void endereco::setO_codigo(double N, int x)
{
	O_codigo[x] = N;
}
