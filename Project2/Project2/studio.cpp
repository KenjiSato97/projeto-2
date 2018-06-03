#include "studio.h"
#include<string>

studio::studio()
{

}

studio::~studio()
{

}
double  studio::getO_areas(int x)
{
	return O_areas[x];
}
double  studio::getO_valorCondominios(int x)
{
	return O_valorCondominios[x];
}
double studio::getO_andars(int x)
{
	return O_andars[x];
}
string  studio::getO_piscinas(int x)
{
	return O_piscinas[x];
}
string  studio::getO_saunas(int x)
{
	return O_saunas[x];
}
string  studio::getO_ginasticas(int x)
{
	return O_ginasticas[x];
}
void studio::setO_areas(double N, int x)
{
	O_areas[x] = N;
}
void studio::setO_valorCondominios(double N, int x)
{
	O_valorCondominios[x] = N;
}
void studio::setO_andars(double N, int x)
{
	O_andars[x] = N;
}
void studio::setO_piscinas(string str, int x)
{
	O_piscinas[x] = str;
}
void studio::setO_saunas(string str, int x)
{
	O_saunas[x] = str;
}
void studio::setO_ginasticas(string str, int x)
{
	O_ginasticas[x] = str;
}
