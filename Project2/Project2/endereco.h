#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class endereco
{
public:
	endereco();
	virtual ~endereco();
	void setO_logradouro(string str, int x);
	void setO_numero(double N, int x);
	void setO_bairro(string str, int x);
	void setO_cidade(string str, int x);
	void setO_cep(string str, int x);
	void setO_codigo(double N, int x);


	string getO_logradouro(int x);
	double getO_numero(int x);
	string getO_bairro(int x);
	string getO_cidade(int x);
	string getO_cep(int x);
	double getO_codigo(int x);

private:
	double O_codigo[100];
	string O_logradouro[100];
	double O_numero[100];
	string O_bairro[100];
	string O_cidade[100];
	string O_cep[100];
};

#endif // ENDERECO_H
