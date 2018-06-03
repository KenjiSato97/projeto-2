#include "servico.h"
#include <string>


servico::servico()
{
	
}

servico::~servico()
{
	
}
std::string servico::getO_ar(int x)
{
	return O_ar[x];
}
std::string servico::getO_net(int x)
{
	return O_net[x];
}
std::string servico::getO_tv(int x)
{
	return O_tv[x];
}
std::string servico::getO_lavanderia(int x)
{
	return O_lavanderia[x];
}
std::string servico::getO_limpeza(int x)
{
	return O_limpeza[x];
}
std::string servico::getO_recep(int x)
{
	return O_recep[x];
}


void servico::setO_ar(std::string str, int x)
{
	O_ar[x] = str;
}
void servico::setO_net(std::string str, int x)
{
	O_net[x] = str;
}
void servico::setO_tv(std::string str, int x)
{
	O_tv[x] = str;
}
void servico::setO_lavanderia(std::string str, int x)
{
	O_lavanderia[x] = str;
}
void servico::setO_limpeza(std::string str, int x)
{
	O_limpeza[x] = str;
}
void servico::setO_recep(std::string str, int x)
{
	O_recep[x] = str;
}
