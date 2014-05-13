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
        void despedirEmpleados(cEmpleado);
        //Propongo un metodo para hacer ERE's, que esta muy de moda ultimamente
        void contratarServicio(cServicio); //Si no puede, lo rescinde
        void showArrayServicios(); //Que solo los muestre por pantalla, no es necesario más
    private:
        cEmpleado* array_empleados[100];
        cServicio* array_servicios[10];
        cEmpleado* cargarFicheroDatos(string);//Le dara los datos del fichero a "contratarEmpleados()". No quiero poner esto como public.
};

#endif // CAGENCIA_H
