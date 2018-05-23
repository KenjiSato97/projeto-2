#ifndef CASA_H
#define CASA_H


class casa
{
    public:
        casa();
        virtual ~casa();
        void setO_numePavimentos(double N);
        void setO_numQuartos(double N);
        void setO_areaTerreno(double N);
        void setO_areaConstruida(double N);
        double getO_numePavimentos();
        double getO_numQuartos();
        double getO_areaTerreno();
        double getO_areaConstruida();

    private:
        double O_numePavimentos;
        double O_numQuartos;
        double O_areaTerreno;
        double O_areaConstruida;
};

#endif // CASA_H
