#pragma once
#include "cadastro.h"
class Menu :
	public cadastro
{
public:
	Menu();
	~Menu();
	void getMenuCadastro();
	void getMenuConsulta();
	void getMenuGeral();
	void getImoveisTipo();
	void getImoveisVTipo();
	void getImoveisATipo();
	void getImoveisVBTipo();
	void getImoveisABTipo();
	void getImoveisCTipo();
};

