#include "cAgencia.h"
#include <fstream>

cAgencia::cAgencia()
{
    //ctor
    int i;
    for (i=0; i<100; i++){
        array_empleados[i]=NULL;
        if (i<100)
            array_servicios[i]=NULL;
    }
}

cEmpleado* cAgencia::cargarFicheroDatos(string fichero){
    string line;
    ifstream file ("fichero");
    if (file.is_open()){
        while(getline(file,line)){
            cout <<line<<"\n"; //Esto coge linea entera y deberiamos analizarla por dentro
        }
        file.close();
    }
    else cout << "Unable to open this file";
    //Debe devolver lo que debe devolver, eso es asi.
}
