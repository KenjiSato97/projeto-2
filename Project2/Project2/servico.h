#ifndef SERVICO_H
#define SERVICO_H
#include <string>
#include "flat.h"
#include "studio.h"

class servico: public flat, public studio
{
public:
	servico();
	virtual ~servico();
	std::string getO_ar(int x);
	std::string getO_net(int x);
	std::string getO_tv(int x);
	std::string getO_lavanderia(int x);
	std::string getO_limpeza(int x);
	std::string getO_recep(int x);

	void setO_ar(std::string str, int x);
	void setO_net(std::string str, int x);
	void setO_tv(std::string str, int x);
	void setO_lavanderia(std::string str, int x);
	void setO_limpeza(std::string str, int x);
	void setO_recep(std::string str, int x);



private:
	std::string O_ar[100];
	std::string O_net[100];
	std::string O_tv[100];
	std::string O_lavanderia[100];
	std::string O_limpeza[100];
	std::string O_recep[100];
};

#endif // SERVICO_H
