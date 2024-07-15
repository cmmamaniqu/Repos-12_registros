#include <iostream>

using namespace std;

	struct empleado{
	    char nombre_empleado[30];
		char sexo_empleado[30];
		double sueldo_empleado;
    }; 

int main(){
	
	int n;
	double maysal=0,mnsal=0;
	int posM=0,posm=0;
	cout<<"Ingrese el numero de empleados: ";cin>>n;

	empleado empleados[n] ; //empleado la función y empleados el arreglo

for (int i = 0; i < n; ++i){
    cout << "Ingrese nombre del empleado"<< i+1 << ": ";
    cin >> empleados[i].nombre_empleado;
    cout << "Ingrese sexo del empleado"<< i+1 << ": ";
    cin >> empleados[i].sexo_empleado;
    cout << "Ingrese sueldo del empleado"<< i+1 << ": ";
    cin >> empleados[i].sueldo_empleado;	
}

    maysal=empleados[0].sueldo_empleado;
    mnsal=empleados[0].sueldo_empleado;
   
	   for (int i=0;i<n;i++){
	   if(empleados[i].sueldo_empleado>maysal){
	   maysal=empleados[i].sueldo_empleado;
	   posM=i;
       }
	   if(empleados[i].sueldo_empleado<mnsal){
	   mnsal=empleados[i].sueldo_empleado;
	   posm=i;
       } 
   }
	   
	cout<<"\nEl salario mayor de un empleado: "<<endl;
	cout<<"Nombre: "<<empleados[posM].nombre_empleado<<endl;
	cout<<"Sexo: "<<empleados[posM].sexo_empleado<<endl;
	cout<<"Salario mayor: "<<empleados[posM].sueldo_empleado<<endl;
	cout<<"\n ";
	cout<<"El salario menor de un empleado: "<<endl;
	cout<<"Nombre: "<<empleados[posm].nombre_empleado<<endl;
	cout<<"Sexo: "<<empleados[posm].sexo_empleado<<endl;
	cout<<"Salario menor: "<<empleados[posm].sueldo_empleado<<endl;

	return 0;
}
