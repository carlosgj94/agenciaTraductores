#include "cServicio.h"

#ifndef CSUNIPERSONAL_H

#define CSUNIPERSONAL_H


class cSUnipersonal: public cServicio
{
    public:
        cSUnipersonal();
        cSUnipersonal(string, string);
        void setServicio(cEmpleado *[]);
        void getEmpleados();
    private:
    	cEmpleado * empleado;
};

#endif // CSUNIPERSONAL_H
