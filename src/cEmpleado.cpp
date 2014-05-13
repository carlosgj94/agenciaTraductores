#include "cEmpleado.h"

cEmpleado::cEmpleado()
{
    //ctor
    nombre="";
    numero_idiomas=0;
    int i;
    for(i=0; i<5; i++){
        idiomas[i]="";
    }
    libre= true;
}
cEmpleado::cEmpleado(string name,int languajes_number, string languajes[4], bool free ){
    nombre=name;
    numero_idiomas = languajes_number;
    int i;
    for (i=0; i<5; i++){
        idiomas[i]=languajes[i];
    }
    libre = free;
}
string cEmpleado::getNombre(){
    return nombre;
}
int cEmpleado::getNumeroIdiomas(){
    return numero_idiomas;
}
string* cEmpleado::getIdiomas(){
    string* pointer;
    pointer = idiomas;
    return pointer;
}

bool cEmpleado::getLibre(){
    return libre;
}
void cEmpleado::setLibre(bool estado){
    libre = estado;
}
bool cEmpleado::conoceIdioma(string languaje){
    int i;
    bool iguales= false;
    for(i=0; i<5;i++){
        if (idiomas[i]==languaje)
            iguales=true;
    }
    return iguales;
}
