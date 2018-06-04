#include "casa.h"

casa::casa()
{

}

casa::~casa()
{

}
double casa::getO_numePavimentosc(int x)
{
	return O_numePavimentosc[x];
}
double casa::getO_numQuartosc(int x)
{
	return O_numQuartosc[x];
}
double casa::getO_areaTerrenoc(int x)
{
	return O_areaTerrenoc[x];
}
double casa::getO_areaConstruidac(int x)
{
	return O_areaConstruidac[x];
}
void casa::setO_numePavimentosc(double N, int x)
{
	O_numePavimentosc[x] = N;
}
void casa::setO_numQuartosc(double N, int x)
{
	O_numQuartosc[x] = N;
}
void casa::setO_areaTerrenoc(double N, int x)
{
	O_areaTerrenoc[x] = N;
}
void casa::setO_areaConstruidac(double N, int x)
{
	O_areaConstruidac[x] = N;
}
