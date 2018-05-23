#ifndef STUDIO_H
#define STUDIO_H
#include<string>

using namespace std;

class studio
{
    public:
        studio();
        virtual ~studio();
        double getO_area();
        double getO_valorCondominio();
        double getO_andar();
        string getO_piscina();
        string getO_sauna();
        string getO_ginastica();
        void setO_area(double N);
        void setO_valorCondominio(double N);
        void setO_andar(double N);
        void setO_piscina(string str);
        void setO_sauna(string str);
        void setO_ginastica(string str);
    private:
        double O_area;
        double O_valorCondominio;
        double O_andar;
        string O_piscina;
        string O_sauna;
        string O_ginastica;

};

#endif // STUDIO_H
