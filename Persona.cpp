#include <iostream>

using namespace std;

//atributos, nombres apellidos direccion  telefono 

class Persona{
  protected : string nombres,apellidos,direccion,fecha_de_nacimiento;
  				int telefono;
  				
  		//metodos constructor con el nombre de la clase, dos metodos se pueden llamar iguak si rreciben una cantidad diferente de paramametros 
  				
  		persona(){
		  }	
  				
  		persona(string nom,string ape, string dir,int tel,string nac){
		  
  			
  				nombres = nom;
  				apellidos = ape;
  				direccion = dir;
  				telefono = tel;
  				fecha_de_nacimiento = nac;
		  }
  		void crear();
		void leer();
		void actualizar();
		void borrar();  
};
