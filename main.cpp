#include "cAgencia.h"

void main(){
	cAgencia agencia();
	int opcion = 1;
	while(opcion !=0){
		cout <<  "Introduzca la opcion deseada"<<endl;
		cout << "\t1->Introducir empleados\n 
				\t2->Crear servicio\n
				\t3->Ver empleados\n
				\t4->Ver servicios\n
				\t5->Despedir Empleado\n
				\t0->Salir" <<endl;
		cin >> opcion;

		if (opcion == 1){
			string archivo;
			cout << "Introduzca el nombre del archivo completo" <<endl;
			cin >> archivo;
			agencia.contratarEmpleados(archivo);
			opcion = 3;
		}

		if (opcion == 2){
			cServicio servicio();
			agencia.contratarServicio(servicio);
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
			agencia.despedirEmpleado()
		}
	}
}