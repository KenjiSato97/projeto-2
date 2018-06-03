#ifndef TERRENO_H
#define TERRENO_H


class terreno
{
public:
	terreno();
	virtual ~terreno();
	double getO_areat(int x);
	void setO_areat(double N, int x);


private:
	double O_areat[100];
};

#endif // TERRENO_H
