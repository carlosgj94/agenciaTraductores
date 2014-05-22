#ifndef CSERVICIO_H
#define CSERVICIO_H
#include <iostream>
  #include "cEmpleado.h"
using namespace std;

class cServicio
{
    public:
    	cServicio();
        string getIdiomaOrigen();
        string getIdiomaDestino();
        virtual void setServicio(cEmpleado *[])=0;
        virtual void getEmpleados()=0;

    protected:
    	string idiomaOrigen;
    	string idiomaDestino;

};

#endif // CSERVICIO_H
