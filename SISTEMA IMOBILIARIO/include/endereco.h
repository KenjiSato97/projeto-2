#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class endereco
{
    public:
        endereco();
        virtual ~endereco();
        void setO_logradouro(string str);
        void setO_numero(double N);
        void setO_bairro(string str);
        void setO_cidade(string str);
        void setO_cep(string str);
        void setO_codigo(double N);


        string getO_logradouro();
        double getO_numero();
        string getO_bairro();
        string getO_cidade();
        string getO_cep();
        double getO_codigo();

    private:
        double O_codigo;
        string O_logradouro;
        double O_numero;
        string O_bairro;
        string O_cidade;
        string O_cep;
};

#endif // ENDERECO_H
