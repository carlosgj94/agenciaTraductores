#include "cAgencia.h"
#include <fstream>

cAgencia::cAgencia()
{
    //ctor
    int i;
    for (i=0; i<100; i++){
        array_empleados[i]=NULL;
        if (i<10)
            array_servicios[i]=NULL;
    }
}

void cAgencia::contratarEmpleados(string fichero){
    string line;
    ifstream file ("fichero");
    if (file.is_open()){
        int counter=0;
        string line;
        int longitud;
        int i;
        int momento=0;
        string nombre='';
        while(getline(file,line)){
            longitud = sizeof(line);
            momento=0;
            for (i=0;i<longitud;i++){
            //Por terminar!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            }
            counter++;
        }
        file.close();
    }
    else cout << "Unable to open this file";
    //Debe devolver lo que debe devolver, eso es asi.
   

    return 0;
}

void cAgencia::showArrayEmpleados(){
    int i;
    int j;
    string* idiomas;
    for (i=0; i<100;i++){
        if (array_empleados[i]==NULL)
            i=100;
        else{
            cout<<i<<": ";
            cout<<"Nombre: "<<array_empleados[i]->getNombre()<<endl;
            cout<<"Numero de idiomas: "<< array_empleados[i]->getNumeroIdiomas()
            idiomas= array_empleados[i]->getIdiomas();
            cout<<"Idiomas: "<<endl;
            for (j=0; j<5;j++){
                cout << "\t"<< idiomas[j]<<endl;
            }
            cout << "Esta libre? "<<array_empleados[i]->getLibre()<<endl;
        }
    }
}