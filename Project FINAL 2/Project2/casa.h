#ifndef CASA_H
#define CASA_H


class casa
{
public:
	casa();
	virtual ~casa();
	void setO_numePavimentosc(double N, int x);
	void setO_numQuartosc(double N, int x);
	void setO_areaTerrenoc(double N, int x);
	void setO_areaConstruidac(double N, int x);
	double getO_numePavimentosc(int x);
	double getO_numQuartosc(int x);
	double getO_areaTerrenoc(int x);
	double getO_areaConstruidac(int x);

private:
	double O_numePavimentosc[100];
	double O_numQuartosc[100];
	double O_areaTerrenoc[100];
	double O_areaConstruidac[100];
};

#endif // CASA_H
