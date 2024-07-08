#include <iostream>

using namespace std;

	struct empleado{
	    char nombre_empledo[30];
		char sexo_empleado[30];
		double sueldo_empleado;
    }; 

int main(){
	
	int n,empleado[n];
	double mysal=0,mnsal=0;
	cout<<"Ingrese los datos del trabajador: ";cin>>n;

	
    empleado[n];

for (int i = 0; i < n; ++i){
    cout << "Ingrese nombre del empleado " << i+1 << ": ";
    cin >> empleado[i].nombre_empleado;
    cout << "Ingrese sexo del empleado " << i+1 << ": ";
    cin >> empleado[i].sexo_empleado;
    cout << "Ingrese sueldo del empleado " << i+1 << ": ";
    cin >> empleado[i].sueldo_empleado;	
}

    mysal=empleados[0].sueldo_empleado;
    mnsal=empleados[0].sueldo_empleado;
   
	   for (int i=0;i<n;i++){
	   if(sueldo_empleado[i]>mysal){
	   mysal=sueldo_empleado[i];
       }
	   if(sueldo_empleado[i]<mnsal){
	   mnsal=sueldo_empleado[i];
       } 
   }
	   
	cout<<"El salario mayor de un empleado es: "<<mysal;
	cout<<"El salario menor de un empleado es: "<<mnsal;

	return 0;
}
