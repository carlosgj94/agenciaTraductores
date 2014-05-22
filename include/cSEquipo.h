#include "cServicio.h"
#ifndef CSEQUIPO_H
#define CSEQUIPO_H


class cSEquipo : public cServicio
{
    public:
        cSEquipo();
        cSEquipo(string, string);
        void setServicio(cEmpleado * empleado[3]);
        void getEmpleados();
    private:
    	cEmpleado * empleado[3];
};

#endif // CSEQUIPO_H
