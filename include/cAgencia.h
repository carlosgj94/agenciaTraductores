#ifndef CAGENCIA_H
#define CAGENCIA_H
#include <iostream>
#include "cEmpleado.h"
#include "cServicio.h"
using namespace std;
//Aun faltan muchas cosaitas por decidir
class cAgencia
{
    public:
        cAgencia();
        void contratarEmpleados(string);//ESTE STRING ES PARA QUE SE PUEDA DEFINIR DONDE ESTÁ EL ARCHIVO DE DATOS
        void despedirEmpleado();
        //Propongo un metodo para hacer ERE's, que esta muy de moda ultimamente
        void contratarServicio(); //Si no puede, lo rescinde
        void showArrayServicios(); //Que solo los muestre por pantalla, no es necesario más
        void showArrayEmpleados(); //Que muestre primero un numero ;)
    private:
        cEmpleado* array_empleados[100];
        cServicio* array_servicios[10];
};

#endif // CAGENCIA_H
