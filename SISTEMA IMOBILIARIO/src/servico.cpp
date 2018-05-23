#include "servico.h"
#include <string>


servico::servico()
{
    //ctor
}

servico::~servico()
{
    //dtor
}
std::string servico::getO_ar()
{
    return O_ar;
}
std::string servico::getO_net()
{
    return O_net;
}
std::string servico::getO_tv()
{
    return O_tv;
}
std::string servico::getO_lavanderia()
{
    return O_lavanderia;
}
std::string servico::getO_limpeza()
{
    return O_limpeza;
}
std::string servico::getO_recep()
{
    return O_recep;
}


void servico::setO_ar(std::string str)
{
    O_ar=str;
}
void servico::setO_net(std::string str)
{
    O_net=str;
}
void servico::setO_tv(std::string str)
{
     O_tv=str;
}
void servico::setO_lavanderia(std::string str)
{
    O_lavanderia=str;
}
void servico::setO_limpeza(std::string str)
{
    O_limpeza=str;
}
void servico::setO_recep(std::string str)
{
    O_recep=str;
}
