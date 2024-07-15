#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

   struct atleta{
   	char nombres_atleta[30];
   	char pais_atleta[30];
   	char disciplina_atleta[30];
   	int medallas_atleta;
   };
   
   int main(){
   	int n,myormeda=0;
   	char pais[30];
   	char dato[30];
   	cout<<"Ingrese los datos del atleta: ";cin>>n;
   	
   	atleta atletas[n] ;
   	
   	for (int i = 0; i < n; ++i){
    cout << "Ingrese nombre del atleta"<< i+1 << ": ";
    cin >> atletas[i].nombres_atleta;
    cout << "Ingrese el pais del atleta"<< i+1 << ": ";
    cin >> atletas[i].pais_atleta;
    cout << "Ingrese la disciplina del atleta"<< i+1 << ": ";
    cin >> atletas[i].disciplina_atleta;
    cout << "Ingrese las medallas del atleta"<< i+1 << ": ";
    cin >> atletas[i].medallas_atleta;
   }
   
    myormeda=atletas[0].medallas_atleta;
   
    cout<<"Ingrese un pais: "; cin>>dato;
    cin.ignore(); // Limpiar 
    cin.getline(pais, 30); 
   
    for (int i=0;i<n;i++){
     if(strcmp(dato,atletas[i].pais_atleta)==0){ 
	   	
	   	cout<<"Nombre: "<<atletas[i].nombres_atleta<<endl;
        cout<<"pais: "<<atletas[i].pais_atleta<<endl;
        cout<<"disciplina: "<<atletas[i].disciplina_atleta<<endl;
        cout<<"medallas: "<<atletas[i].medallas_atleta<<endl;
        cout<<"\n";
        
     if(atletas[i].medallas_atleta>myormeda){
	    myormeda=atletas[i].medallas_atleta;
	}
    }
    }
    cout<<"atleta con mas medallas:"<<myormeda<<endl; 
       
	return 0;
   }
   