#include "casa.h"

casa::casa()
{

}

casa::~casa()
{

}
double casa::getO_numePavimentos()
{
    return O_numePavimentos;
}
double casa::getO_numQuartos()
{
    return O_numQuartos;
}
double casa::getO_areaTerreno()
{
    return O_areaTerreno;
}
double casa::getO_areaConstruida()
{
    return O_areaConstruida;
}
void casa::setO_numePavimentos(double N)
{
    O_numePavimentos=N;
}
void casa::setO_numQuartos(double N)
{
    O_numQuartos=N;
}
void casa::setO_areaTerreno(double N)
{
    O_areaTerreno=N;
}
void casa::setO_areaConstruida(double N)
{
    O_areaConstruida=N;
}
