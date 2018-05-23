#include "studio.h"
#include<string>

studio::studio()
{

}

studio::~studio()
{

}
double  studio::getO_area()
{
    return O_area;
}
double  studio::getO_valorCondominio()
{
    return O_valorCondominio;
}
string  studio  ::getO_piscina()
{
    return O_piscina;
}
string  studio  ::getO_sauna()
{
    return O_sauna;
}
string  studio  ::getO_ginastica()
{
    return O_ginastica;
}
void studio::setO_area(double N)
{
    O_area=N;
}
void studio::setO_valorCondominio(double N)
{
    O_valorCondominio=N;
}
void studio::setO_piscina(string str)
{
    O_piscina=str;
}
void studio::setO_sauna(string str)
{
    O_sauna=str;
}
void studio::setO_ginastica(string str)
{
    O_ginastica=str;
}
