#include "cSUnipersonal.h"

cSUnipersonal::cSUnipersonal()
{
    empleado=NULL;
}
cSUnipersonal::cSUnipersonal(string idiomaO,string idiomaD){
	empleado=NULL;
	idiomaOrigen = idiomaO;
	idiomaDestino = idiomaD;
}
void cSUnipersonal::setServicio(cEmpleado * traductor){
	empleado = traductor;
	traductor->setLibre(false);
}

void cSUnipersonal::getEmpleados(){
	string nombre=empleado->getNombre();
	int numeroIdiomas = empleado->getNumeroIdiomas();
	string* idiomas = empleado->getIdiomas();

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
