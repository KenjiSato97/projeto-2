#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include<string>



using namespace std;


class apartamento
{
public:
	apartamento();
	virtual ~apartamento();
	void setO_posicaoa(string str, int x);
	void setO_numQuartosa(double N, int x);
	void setO_andara(double N, int x);
	void setO_valorCondominioa(double N, int x);
	void setO_vagasGaragema(double N, int x);
	void setO_areaa(double N, int x);

	string getO_posicaoa(int x);
	double getO_numQuartosa(int x);
	double getO_andara(int x);
	double getO_valorCondominioa(int x);
	double getO_vagasGaragema(int x);
	double getO_areaa(int x);
private:
	string O_posicaoa[100];
	double O_numQuartosa[100];
	double O_andara[100];
	double O_valorCondominioa[100];
	double O_vagasGaragema[100];
	double O_areaa[100];

};

#endif // APARTAMENTO_H
