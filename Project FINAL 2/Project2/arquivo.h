#pragma once
#include "servico.h"
#include "variaveis.h"
class arquivo: public servico
{
public:
	arquivo();
	~arquivo();
	void getO_Arquivo(double N);
	void setO_Arquivo(double N);
};

