#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class endereco
{
public:
	endereco();
	virtual ~endereco();
	void setO_logradouro(string str, int x, int y);
	void setO_numero(double N, int x, int y);
	void setO_bairro(string str, int x, int y);
	void setO_cidade(string str, int x, int y);
	void setO_cep(string str, int x, int y);
	void setO_codigo(double N, int x, int y);


	string getO_logradouro(int x, int y);
	double getO_numero(int x, int y);
	string getO_bairro(int x, int y);
	string getO_cidade(int x, int y);
	string getO_cep(int x, int y);
	double getO_codigo(int x, int y);

private:
	double O_codigo[100][5];
	string O_logradouro[100][5];
	double O_numero[100][5];
	string O_bairro[100][5];
	string O_cidade[100][5];
	string O_cep[100][5];
};

#endif // ENDERECO_H
