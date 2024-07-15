#include <iostream>

using namespace std;

   struct persona{
   	char nombre_persona[30];
   	int dianacimiento_persona;
   	int mesnacimiento_persona;
   	int anionacimiento_persona;
   };
   
   int main(){
   	 int n,dato;
     int dia=0,mes=0,anio=0;
	cout<<"Ingrese los datos de la persona: ";cin>>n;
	
	persona personas[n] ;
	
	for (int i = 0; i < n; ++i){
    cout << "Ingrese nombre de la persona"<< i+1 << ": ";
    cin >> personas[i].nombre_persona;
    cout << "Ingrese el dia de nacimiento"<< i+1 << ": ";
    cin >> personas[i].dianacimiento_persona;
    cout << "Ingrese el mes de nacimiento"<< i+1 << ": ";
    cin >> personas[i].mesnacimiento_persona;
    cout << "Ingrese el anio de nacimiento"<< i+1 << ": ";
    cin >> personas[i].anionacimiento_persona;
   }
    dia=personas[0].dianacimiento_persona;
    mes=personas[0].mesnacimiento_persona;
    anio=personas[0].anionacimiento_persona;
    
    while(dato!=0){
    cout<<"Ingrese un numero: "; cin>>dato; 

    for (int i=0;i<n;i++){
		if((dato==personas[i].mesnacimiento_persona) && (dato!=0)){
	   	
	   	cout<<"Nombre: "<<personas[i].nombre_persona<<endl;
        cout<<"dia nacimiento: "<<personas[i].dianacimiento_persona<<endl;
        cout<<"mes nacimiento: "<<personas[i].mesnacimiento_persona<<endl;
        cout<<"anio nacimiento: "<<personas[i].anionacimiento_persona<<endl;
    }
    }
}
    return 0;
}

    
     
   
   