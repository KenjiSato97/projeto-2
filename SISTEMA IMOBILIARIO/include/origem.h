#ifndef ORIGEM_H
#define ORIGEM_H
#include "comercio.h"
#include "casa.h"
#include "terreno.h"
#include "apartamento.h"
#include "flat.h"
#include "studio.h"

class origem:public apartamento , public comercio, public flat, public casa, public terreno, public studio
{
    public:
        origem();
        virtual ~origem();

    protected:

    private:
};

#endif // ORIGEM_H
