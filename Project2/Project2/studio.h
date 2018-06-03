#ifndef STUDIO_H
#define STUDIO_H
#include<string>

using namespace std;

class studio 
{
public:
	studio();
	virtual ~studio();
	double getO_areas(int x);
	double getO_valorCondominios(int x);
	double getO_andars(int x);
	string getO_piscinas(int x);
	string getO_saunas(int x);
	string getO_ginasticas(int x);
	void setO_areas(double N, int x);
	void setO_valorCondominios(double N, int x);
	void setO_andars(double N, int x);
	void setO_piscinas(string str, int x);
	void setO_saunas(string str, int x);
	void setO_ginasticas(string str, int x);
private:
	double O_areas[100];
	double O_valorCondominios[100];
	double O_andars[100];
	string O_piscinas[100];
	string O_saunas[100];
	string O_ginasticas[100];

};

#endif // STUDIO_H
