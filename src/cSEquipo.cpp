#include "cSEquipo.h"
#include "cServicio.h"

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


void cSEquipo::setServicio(cEmpleado * traductor[3]){
	int i;
	for (i=0;i<3;i++){
            if(traductor[i]){
            empleado[i]= *(traductor+i);
            empleado[i]->setLibre(false);
        }
	}
}

void cSEquipo::getEmpleados(){
	int i=0;
	string nombre;
	int numeroIdiomas;
	string* idiomas;
	for (i=0; i<3;i++){
		nombre=empleado[i]->getNombre();
		numeroIdiomas = empleado[i]->getNumeroIdiomas();
		idiomas = empleado[i]->getIdiomas();

		cout << "Nombre: "<<nombre<<endl;
		cout << "Numero de idiomas: "<< numeroIdiomas<<endl;
		int i=0;
		for (i=0; i<5;i++){
			cout<<"Idiomas que sabe: "<<endl;
			if(*(idiomas+i)!= " " )
				cout<<*(idiomas+i)<<endl;
			else
				i=5;
		}
	}
}
