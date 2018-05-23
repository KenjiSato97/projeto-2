#ifndef TERRENO_H
#define TERRENO_H


class terreno
{
    public:
        terreno();
        virtual ~terreno();
        double getO_area();
        void setO_area(double N);


    private:
        double O_area;
};

#endif // TERRENO_H
