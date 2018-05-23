#include "comercio.h"
#include <string>

comercio::comercio()
{
    //ctor
}

comercio::~comercio()
{
    //dtor
}
double comercio::getO_precov()
{
    return O_precov;
}
double comercio::getO_precoa()
{
    return O_precoa;
}
std::string comercio::getO_aluga()
{
    return O_aluga;
}
std::string comercio::getO_venda()
{
    return O_venda;
}
void comercio::setO_precoa(double N)
{
    O_precoa=N;
}
void comercio::setO_precov(double N)
{
    O_precov=N;
}
void comercio::setO_aluga(std::string str)
{
    O_aluga= str;
}
void comercio::setO_venda(std::string str)
{
    O_venda= str;
}
