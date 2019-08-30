#include <iostream>
typedef std::string Dato;

class Nodo{
	Dato dato;
	
	Nodo* enlace;
	
	public:
	Nodo(std::string d){
		dato	= d;
		enlace	= 0;
	}
	
	
	Nodo(std::string d, Nodo* n){
		dato=d;
		enlace=n;
	}
	
	
	Dato datonodo() const{
		return dato;
	}
	
	Nodo* enlacenodo() const{ 
		return enlace;
	}
	
	void ponerenlace(Nodo* sgte){
		enlace=sgte;
	}
	
};
