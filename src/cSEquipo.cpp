#include "cSEquipo.h"

cSEquipo::cSEquipo()
{
    for(int i =0;i<3;i++)
    	empleado[i]=NULL;   
}
cSEquipo::cSEquipo(string idiomaO, string idiomaD){
	for(int i =0;i<3;i++)
    	empleado[i]=NULL; 
    idiomaOrigen = idiomaO;
    idiomaDestino= idiomaD;
}

void cSEquipo::setServicio(cEmpleado * traductor){
	int i=0;
	for (i;i<3;i++){
		empleado[i]= *(traductor+i);
		*(traductor+i)->setLibre(false);
	}
}

void cSEquipo::getEmpleados(){
	int i=0;
	string nombre;
	int numeroIdiomas;
	string* idiomas;
	for (i; i<3;i++){
		nombre=empleado->getNombre();
		numeroIdiomas = empleado->getNumeroIdiomas();
		idiomas = empleado->getIdiomas();

		cout << "Nombre: "<<nombre<<endl;
		cout << "Numero de idiomas: "<< numeroIdiomas<<endl;
		int i=0;
		for (i; i<5;i++){
			cout<<"Idiomas que sabe: "<<endl;
			if(*(idiomas+i))
				cout<<*(idiomas+i)<<endl;
			else
				i=5;
		}
	}
}