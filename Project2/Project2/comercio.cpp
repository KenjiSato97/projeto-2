#include "comercio.h"
#include <string>

comercio::comercio()
{
	total[0] = 0;
	total[1] = 0;
	total[2] = 0;
	total[3] = 0;
	total[4] = 0;
}

comercio::~comercio()
{
	//dtor
}
double comercio::getO_precov(int x, int y)
{
	return O_precov[x][y];
}
double comercio::getO_precoa(int x, int y)
{
	return O_precoa[x][y];
}
std::string comercio::getO_aluga(int x, int y)
{
	return O_aluga[x][y];
}
std::string comercio::getO_venda(int x, int y)
{
	return O_venda[x][y];
}
int comercio::getO_Total(int x)
{
	return total[x];
}
void comercio::setO_precoa(double N, int x, int y)
{
	O_precoa[x][y] = N;
}
void comercio::setO_precov(double N, int x, int y)
{
	O_precov[x][y] = N;
}
void comercio::setO_aluga(std::string str, int x, int y)
{
	O_aluga[x][y] = str;
}
void comercio::setO_venda(std::string str, int x, int y)
{
	O_venda[x][y] = str;
}
void comercio::setO_Total(int N, int x)
{
	total[x] += N;
}
