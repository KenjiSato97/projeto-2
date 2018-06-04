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

	double getO_precov(int x, int y);
	double getO_precoa(int x, int y);
	std::string getO_aluga(int x, int y);
	std::string getO_venda(int x, int y);
	int getO_Total(int x);

	void setO_precov(double N, int x, int y);
	void setO_precoa(double N, int x, int y);
	void setO_aluga(std::string str, int x, int y);
	void setO_venda(std::string str, int x, int y);
	void setO_Total(int N,int x);
protected:

private:
	double O_precov[100][5];
	double O_precoa[100][5];
	std::string O_aluga[100][5];
	std::string O_venda[100][5];
	int total[5];
};

#endif // COMERCIO_H
