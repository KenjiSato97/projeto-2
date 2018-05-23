#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include<string>

using namespace std;


class apartamento
{
    public:
        apartamento();
        virtual ~apartamento();
        void setO_posicao(string str);
        void setO_numQuartos(double N);
        void setO_andar(double N);
        void setO_valorCondominio(double N);
        void setO_vagasGaragem(double N);
        void setO_area(double N);
        string getO_posicao();
        double getO_numQuartos();
        double getO_andar();
        double getO_valorCondominio();
        double getO_vagasGaragem();
        double getO_area();
    private:
        string O_posicao;
        double O_numQuartos;
        double O_andar;
        double O_valorCondominio;
        double O_vagasGaragem;
        double O_area;

};

#endif // APARTAMENTO_H
