#pragma once
#include "comercio.h"

class cadastro:public comercio
{
public:
	cadastro();
	~cadastro();
	void setCadastra(int N);
	void getImoveis();
	void getPrintImoveis(int N, int i);
	


};

