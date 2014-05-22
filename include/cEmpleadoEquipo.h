//
//  cEmpleadoEquipo.h
//  Agencia de traduccion
//
//  Created by Borja Irigoyen on 3/05/14.
//  Copyright (c) 2014 Practicas POO. All rights reserved.
//

#ifndef Agencia_de_traduccion_cEmpleadoEquipo_h
#define Agencia_de_traduccion_cEmpleadoEquipo_h
#include "cEmpleado.h"

class cEmpleadoEquipo:public cEmpleado {
    
public:
    
    void contratar();
    void despedir();
    void listaEmpleados();
};


#endif
