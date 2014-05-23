#include "cAgencia.h"
#include "cSUnipersonal.h"
#include "cSEquipo.h"
#include "cServicio.h"
#include "cEmpleado.h"
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

void cAgencia::contratarEmpleados(){
    fstream fich;
    string nombre,idiomas[5];
    int nIdiomas;
    int i=0,j=0;
    int nEmpleados;
    fich.open("Empleados.txt");
    if (!fich) {
        cout<<endl<<"Error en la apertura del fichero."<<endl;
    }
    else
    {
        fich>>nEmpleados;
        while (j<nEmpleados){
            int k;
            for(k=0;k<5;k++){
                idiomas[k]=' ';
            }
            fich>>nombre>>nIdiomas;
            if (nIdiomas!=0) {
                do {
                    fich>>idiomas[i];
                    i++;
                }while (i<nIdiomas);
                i=0;
            }
            array_empleados[j]= new cEmpleado(nombre,nIdiomas,idiomas, false);
            j++;
        }
    }
    fich.close();
}

void cAgencia::showArrayEmpleados(){
    int i;
    int j;
    string* idiomas;
    for (i=0; i<100;i++){
        if (array_empleados[i]==NULL)
            i=100;
        else{
            cout<<i<<".:\t ";
            cout<<"Nombre: "<<array_empleados[i]->getNombre()<<endl;
            cout<<"Numero de idiomas: "<< array_empleados[i]->getNumeroIdiomas()<<endl;
            idiomas= array_empleados[i]->getIdiomas();
            cout<<"Idiomas: "<<endl;
            for (j=0; j<5;j++){
                cout << "\t"<< idiomas[j]<<endl;
            }
            cout << "Esta libre? "<<array_empleados[i]->getLibre()<<endl;
        }
    }
}

void cAgencia::showArrayServicios(){
    int i=0;

    for(i=0; i<10;i++){
        if(array_empleados[i]!=NULL){
            i=10;
        }
        else{
            cout<<i<<".:\t";
            cout<<"Idioma origen: " <<array_servicios[i]->getIdiomaOrigen()<<endl;
            cout<< "Idioma destino: "<<array_servicios[i]->getIdiomaDestino()<<endl;
            array_servicios[i]->getEmpleados();
        }
    }
}

void cAgencia::contratarServicio(){
    int i;
    string idiomaOrigen;
    string idiomaDestino;
    cout<<"Elige idioma origen: "<<endl;
    cin >> idiomaOrigen;
    cout <<"Elige idioma destino: "<<endl;
    cin >> idiomaDestino;
    bool creado=false;
    for(i=0;i<100;i++){
        cout<<i<<endl;
        if(array_empleados[i]){
            i=100;
        }
        if(array_empleados[i]->getLibre()==true)
            if(array_empleados[i]->conoceIdioma(idiomaOrigen)==true)
                if(array_empleados[i]->conoceIdioma(idiomaDestino)==true){
                    int j=0;
                    for(j=0;j<10;j++){
                        if(array_servicios[j]){
                            cout << "Equipo unipersonal creado."<<endl;
                            cout << "Servicio creado"<<endl;
                            cServicio * unipersonal=new cSUnipersonal(idiomaOrigen, idiomaDestino);
                            cEmpleado * empleado[1] ;
                            empleado[0]= array_empleados[i];
                            unipersonal->setServicio(empleado);
                            array_servicios[j]=unipersonal;
                            j=10;
                            creado=true;
                        }
                    i=100;
                    }
                }
    }
    //No se ha conseguido crear el equipo de una persona
    //probemos con uno multi
    i=0;
    for(i=0;i<100;i++){
        if(array_empleados[i]->getLibre()==true){
            if(array_empleados[i]->conoceIdioma(idiomaOrigen)==true){
                int k=0;
                for (k=0;k<100;k++){
                    if(array_empleados[k]->getLibre()==true){
                        if(array_empleados[k]->conoceIdioma(idiomaDestino)==true){
                            //Esta parte es para equipos de dos personas
                            int l=0;
                            for(l=0;l<5;l++){
                                string * idiomas=array_empleados[k]->getIdiomas();
                                if(array_empleados[i]->conoceIdioma(*(idiomas+l))==true){
                                    int m=0;
                                    for(m=0;m<10;m++){
                                        if(array_servicios[m]==NULL){
                                            cServicio * equipo= new cSEquipo (idiomaOrigen, idiomaDestino);
                                            cEmpleado * point [2] ;
                                            point[0]=array_empleados[i];
                                            point[1]=array_empleados[k];
                                            equipo->setServicio(point);
                                            array_servicios[m]=equipo;
                                            creado=true;
                                            m=10;
                                            l=5;
                                        }
                                    }
                                }
                            }
                            //Aqui empezaria el equipo de tres
                            if(creado==false){
                                int n=0;
                                string * idiomasIntermedio;
                                for(n=0;n<100;n++){
                                    idiomasIntermedio = array_empleados[n]->getIdiomas();
                                    int m;
                                    for(m=0;m<5;m++){
                                        if(array_empleados[i]->conoceIdioma(*(idiomasIntermedio+m))==true)
                                            if(array_empleados[k]->conoceIdioma(*(idiomasIntermedio+m))==true){
                                                //Equipo encontrado, pasamos a ver si hay espacio
                                                int x=0;
                                                for(x=0;x<10;x++){
                                                    if(array_servicios[x]==NULL){
                                                        //espacio y equipo encontrado
                                                        cSEquipo equipo(idiomaOrigen, idiomaDestino);
                                                        cEmpleado* pointTres[3];
                                                        pointTres[0]=array_empleados[i];
                                                        pointTres[1]=array_empleados[k];
                                                        pointTres[2]=array_empleados[n];
                                                        equipo.setServicio(pointTres);
                                                        creado = true;
                                                        n=100;
                                                        x=10;
                                                        m=5;
                                                    }
                                                }
                                            }

                                    }
                                }
                            }
                            k=100;
                            i=100;
                        }
                    }
                }
            }
        }
    }
    if(creado==true){
        cout<<"El servicio ha sido creado con exito"<<endl;
    }
    else{
        cout <<"No se ha podido crear el servicio"<<endl;
    }
}

void cAgencia::despedirEmpleado(){
    string nombre;
    cout << "Introduzca el nombre del empleado a despedir: "<<endl;
    cin >>nombre;
    int i;
bool encontrado= false;
    for(i=0; i<100;i++){
        if(array_empleados[i]->getNombre()==nombre){
        cout << "Empleado despedido."<<endl;
            delete array_empleados[i];
            encontrado=true;
        }
    if (encontrado==true){
        int j=i+1;
        while (j<100-i && array_empleados[j]){
            array_empleados[i]=array_empleados[j];
            i++;
            j++;
        }
    }
    }
    if(encontrado==false)
        cout<<"Empleado no encontrado. "<<endl;
}
