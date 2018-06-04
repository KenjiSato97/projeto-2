#include "servico.h"
#include <string>


servico::servico()
{
	
}

servico::~servico()
{
	
}
std::string servico::getO_ar(int x, int y)
{
	return O_ar[x][y];
}
std::string servico::getO_net(int x, int y)
{
	return O_net[x][y];
}
std::string servico::getO_tv(int x, int y)
{
	return O_tv[x][y];
}
std::string servico::getO_lavanderia(int x, int y)
{
	return O_lavanderia[x][y];
}
std::string servico::getO_limpeza(int x, int y)
{
	return O_limpeza[x][y];
}
std::string servico::getO_recep(int x, int y)
{
	return O_recep[x][y];
}


void servico::setO_ar(std::string str, int x, int y)
{
	O_ar[x][y] = str;
}
void servico::setO_net(std::string str, int x, int y)
{
	O_net[x][y] = str;
}
void servico::setO_tv(std::string str, int x, int y)
{
	O_tv[x][y] = str;
}
void servico::setO_lavanderia(std::string str, int x, int y)
{
	O_lavanderia[x][y] = str;
}
void servico::setO_limpeza(std::string str, int x, int y)
{
	O_limpeza[x][y] = str;
}
void servico::setO_recep(std::string str, int x, int y)
{
	O_recep[x][y] = str;
}
