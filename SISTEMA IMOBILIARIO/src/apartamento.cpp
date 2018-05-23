#include "apartamento.h"
#include<string>

apartamento::apartamento()
{

}

apartamento::~apartamento()
{

}
string  apartamento::getO_posicao()
{
    return O_posicao;
}
double  apartamento::getO_numQuartos()
{
    return O_numQuartos;
}
double  apartamento::getO_andar()
{
    return O_andar;
}
double  apartamento::getO_valorCondominio()
{
    return O_valorCondominio;
}
double  apartamento::getO_vagasGaragem()
{
    return O_vagasGaragem;
}
double  apartamento::getO_area()
{
    return O_area;
}
void apartamento::setO_posicao(string str)
{
    O_posicao=str;
}
void apartamento::setO_numQuartos(double N)
{
    O_numQuartos=N;
}
void apartamento::setO_andar(double N)
{
    O_andar=N;
}
void apartamento::setO_valorCondominio(double N)
{
    O_valorCondominio=N;
}
void apartamento::setO_vagasGaragem(double N)
{
    O_vagasGaragem=N;
}
void apartamento::setO_area(double N)
{
    O_area=N;
}
