#include <iostream>

using namespace std;

   struct persona{
   	char nombres_persona[30];
   	int Dni_persona;
   	int edad_persona;
   };
   
   int main(){
   	   int n,s,c;
	   int may50anos=0,prom=0;
	cout<<"Ingrese los datos de la persona: ";cin>>n;
	
	persona personas[n] ;
	
	for (int i = 0; i < n; ++i){
    cout << "Ingrese nombre de la persona"<< i+1 << ": ";
    cin >> personas[i].nombres_persona;
    cout << "Ingrese el dni de la persona"<< i+1 << ": ";
    cin >> personas[i].Dni_persona;
    cout << "Ingrese la edad de la persona"<< i+1 << ": ";
    cin >> personas[i].edad_persona;	
}
    may50anos=personas[0].edad_persona;
    prom=personas[0].edad_persona;
    
    for (int i=0;i<n;i++){
	   if(personas[i].edad_persona>50){
	   	c++;
	   	may50anos=c;
    } 
	  s=s+personas[i].edad_persona;
	  prom=s/n;
    
    cout<<"Nombre: "<<personas[i].nombres_persona<<endl;
    cout<<"DNI: "<<personas[i].Dni_persona<<endl;
    cout<<"Edad: "<<personas[i].edad_persona<<endl;
   }
    cout<<"\nLas personas mayores a 50 son: "<<may50anos;
    cout<<"\nEl promedio de las edades es: "<<prom;
  
	return 0;
   }
   