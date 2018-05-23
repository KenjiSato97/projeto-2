#ifndef COMERCIO_H
#define COMERCIO_H
#include <string>
#include "endereco.h"
#include "servico.h"
class comercio: public endereco, public servico
{
    public:
        comercio();
        virtual ~comercio();
        double getO_precov();
        double getO_precoa();
        std::string getO_aluga();
        std::string getO_venda();

        void setO_precov(double N);
        void setO_precoa(double N);
        void setO_aluga(std::string str);
        void setO_venda(std::string str);

    protected:

    private:
        double O_precov;
        double O_precoa;
        std::string O_aluga;
        std::string O_venda;
};

#endif // COMERCIO_H
