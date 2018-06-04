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
	std::string getO_ar(int x,int y);
	std::string getO_net(int x, int y);
	std::string getO_tv(int x, int y);
	std::string getO_lavanderia(int x, int y);
	std::string getO_limpeza(int x, int y);
	std::string getO_recep(int x, int y);

	void setO_ar(std::string str, int x, int y);
	void setO_net(std::string str, int x, int y);
	void setO_tv(std::string str, int x, int y);
	void setO_lavanderia(std::string str, int x, int y);
	void setO_limpeza(std::string str, int x, int y);
	void setO_recep(std::string str, int x, int y);



private:
	std::string O_ar[100][5];
	std::string O_net[100][5];
	std::string O_tv[100][5];
	std::string O_lavanderia[100][5];
	std::string O_limpeza[100][5];
	std::string O_recep[100][5];
};

#endif // SERVICO_H
