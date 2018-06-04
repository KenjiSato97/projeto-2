#include "flat.h"

flat::flat()
{
	//ctor
}

flat::~flat()
{
	//dtor
}
double flat::getO_valorCondominiof(int x)
{
	return O_valorCondominiof[x];
}
double flat::getO_areaf(int x)
{
	return O_areaf[x];
}
void flat::setO_valorCondominiof(double N, int x)
{
	O_valorCondominiof[x] = N;
}
void flat::setO_areaf(double N, int x)
{
	O_valorCondominiof[x] = N;
}
