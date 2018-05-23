#ifndef FLAT_H
#define FLAT_H


class flat
{
    public:
        flat();
        virtual ~flat();
        double getO_area();
	    double getO_valorCondominio();
        void setO_area(double N);
        void setO_valorCondominio(double N);


    protected:

    private:

        double O_area;
	    double O_valorCondominio;
};

#endif // FLAT_H
