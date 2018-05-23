#ifndef SERVICO_H
#define SERVICO_H
#include <string>

class servico
{
    public:
        servico();
        virtual ~servico();
        std::string getO_ar();
        std::string getO_net();
        std::string getO_tv();
        std::string getO_lavanderia();
        std::string getO_limpeza();
        std::string getO_recep();

        void setO_ar(std::string str);
        void setO_net(std::string str);
        void setO_tv(std::string str);
        void setO_lavanderia(std::string str);
        void setO_limpeza(std::string str);
        void setO_recep(std::string str);



    private:
    std::string O_ar;
	std::string O_net;
	std::string O_tv;
	std::string O_lavanderia;
    std::string O_limpeza;
	std::string O_recep;
};

#endif // SERVICO_H
