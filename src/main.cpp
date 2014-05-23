#include "cAgencia.h"

int main(int argc, const char * argv[]){
	cAgencia agencia;
	int opcion = 1;
	while(opcion !=0){
		cout <<  "Introduzca la opcion deseada"<<endl;
		cout << "\t1->Introducir empleados\n \t2->Crear servicio\n\t3->Ver empleados\n\t4->Ver servicios\n\t5->Despedir Empleado\n\t0->Salir" <<endl;
		cin >> opcion;

		if (opcion == 1){
			agencia.contratarEmpleados();
			opcion = 3;
		}

		if (opcion == 2){
			agencia.contratarServicio();
		}

		if (opcion == 3){
			cout << "Los empleados son: " << endl;
			agencia.showArrayEmpleados();
		}

		if (opcion == 4){
			cout << "Los proyectos son: "<< endl;
			agencia.showArrayServicios();
		}
		if (opcion == 5){
			agencia.despedirEmpleado()  ;
		}
	}

return 0;}
