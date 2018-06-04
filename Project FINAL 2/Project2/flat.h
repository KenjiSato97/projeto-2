#ifndef FLAT_H
#define FLAT_H


class flat 
{
public:
	flat();
	virtual ~flat();
	double getO_areaf(int x);
	double getO_valorCondominiof(int x);
	void setO_areaf(double N, int x);
	void setO_valorCondominiof(double N, int x);


protected:

private:

	double O_areaf[100];
	double O_valorCondominiof[100];
};

#endif // FLAT_H
