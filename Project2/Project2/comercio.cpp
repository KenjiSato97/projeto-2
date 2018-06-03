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
double comercio::getO_precov(int x)
{
	return O_precov[x];
}
double comercio::getO_precoa(int x)
{
	return O_precoa[x];
}
std::string comercio::getO_aluga(int x)
{
	return O_aluga[x];
}
std::string comercio::getO_venda(int x)
{
	return O_venda[x];
}
int comercio::getO_Total(int x)
{
	return total[x];
}
void comercio::setO_precoa(double N, int x)
{
	O_precoa[x] = N;
}
void comercio::setO_precov(double N, int x)
{
	O_precov[x] = N;
}
void comercio::setO_aluga(std::string str, int x)
{
	O_aluga[x] = str;
}
void comercio::setO_venda(std::string str, int x)
{
	O_venda[x] = str;
}

void comercio::getO_Total(int N, int x)
{
	total[x] += N;
}
