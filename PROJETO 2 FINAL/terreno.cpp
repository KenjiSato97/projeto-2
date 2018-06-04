#include "terreno.h"

terreno::terreno()
{
	//ctor
}

terreno::~terreno()
{
	//dtor
}
double terreno::getO_areat(int x)
{
	return O_areat[x];
}
void terreno::setO_areat(double str, int x)
{
	O_areat[x] = str;
}
