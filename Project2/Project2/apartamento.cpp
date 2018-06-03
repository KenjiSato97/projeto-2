#include "apartamento.h"
#include<string>

apartamento::apartamento()
{

}

apartamento::~apartamento()
{

}
string  apartamento::getO_posicaoa(int x)
{
	return O_posicaoa[x];
}
double  apartamento::getO_numQuartosa(int x)
{
	return O_numQuartosa[x];
}
double  apartamento::getO_andara(int x)
{
	return O_andara[x];
}
double  apartamento::getO_valorCondominioa(int x)
{
	return O_valorCondominioa[x];
}
double  apartamento::getO_vagasGaragema(int x)
{
	return O_vagasGaragema[x];
}
double  apartamento::getO_areaa(int x)
{
	return O_areaa[x];
}
void apartamento::setO_posicaoa(string str, int x)
{
	O_posicaoa[x] = str;
}
void apartamento::setO_numQuartosa(double N, int x)
{
	O_numQuartosa[x] = N;
}
void apartamento::setO_andara(double N, int x)
{
	O_andara[x] = N;
}
void apartamento::setO_valorCondominioa(double N, int x)
{
	O_valorCondominioa[x] = N;
}
void apartamento::setO_vagasGaragema(double N, int x)
{
	O_vagasGaragema[x] = N;
}
void apartamento::setO_areaa(double N, int x)
{
	O_areaa[x] = N;
}
