//
//  cEmpleadoUnico.h
//  Agencia de traduccion
//
//  Created by Borja Irigoyen on 3/05/14.
//  Copyright (c) 2014 Practicas POO. All rights reserved.
//

#ifndef Agencia_de_traduccion_cEmpleadoUnico_h
#define Agencia_de_traduccion_cEmpleadoUnico_h
#include "cEmpleado.h"

class cEmpleadoUnico:public cEmpleado {
    
public:
    
    cEmpleadoUnico();
    cEmpleadoUnico(string,int,string[]);
    string getNombre(){return nombre;}
    void serDisponible(bool);
    void mostrarEmpleados();
    bool buscarIdioma(string);
};


#endif
