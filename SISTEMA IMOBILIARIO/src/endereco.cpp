#include "Endereco.h"
#include<string>

endereco::endereco()
{

}

endereco::~endereco()
{

}
string endereco::getO_logradouro()
{
    return O_logradouro;
}
double endereco::getO_numero()
{
    return O_numero;
}
string endereco::getO_bairro()
{
    return O_bairro;
}
string endereco::getO_cidade()
{
    return O_cidade;
}
string endereco::getO_cep()
{
    return O_cep;
}
double endereco::getO_codigo()
{
    return O_codigo;
}



void endereco::setO_logradouro(string str)
{
    O_logradouro=str;
}
void endereco::setO_numero(double N)
{
    O_numero=N;
}
void endereco::setO_bairro(string str)
{
    O_bairro=str;
}
void endereco::setO_cidade(string str)
{
    O_cidade=str;
}
void endereco::setO_cep(string str)
{
    O_cep=str;
}
void endereco::setO_codigo(double N)
{
    O_codigo=N;
}
