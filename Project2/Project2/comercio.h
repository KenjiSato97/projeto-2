#ifndef COMERCIO_H
#define COMERCIO_H
#include <string>
#include "endereco.h"
#include "casa.h"
#include "apartamento.h"
#include "terreno.h"
#include "servico.h"

class comercio : public endereco, public casa, public apartamento, public terreno, public servico
{
public:
	comercio();
	virtual ~comercio();

	double getO_precov(int x);
	double getO_precoa(int x);
	std::string getO_aluga(int x);
	std::string getO_venda(int x);
	int getO_Total(int x);

	void setO_precov(double N, int x);
	void setO_precoa(double N, int x);
	void setO_aluga(std::string str, int x);
	void setO_venda(std::string str, int x);
	void getO_Total(int N,int x);
protected:

private:
	double O_precov[100];
	double O_precoa[100];
	std::string O_aluga[100];
	std::string O_venda[100];
	int total[5];
};

#endif // COMERCIO_H
