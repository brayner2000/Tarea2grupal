#include <"Persona.cpp">
#include <iostream>

using namespace std;

class Cliente : Persona{
	//atributo de estudiante sera privado
	
	private : string numero_identificacion_tributario;
	// constructor
	
	public :
		Cliente(){
		}
	Cliente(string nom, string ape, string dir, int tel, string nac,string ca) : persona (nom,ape,dir,nac,){
		numero_identificacion_tributario = nit ;
		
		
		void leer(){
			cout<<nombres<<endl;
			cin>>nom>>endl;
			
			
		}
		
	}
};
