#include <iostream>
/* crea una referencia - tipo definido */
typedef char Dato;

class Nodo{
	/* Declaracion de variable del tipo entero */
	Dato dato;
	
	/* Declaracion de enlace */
	Nodo* enlace;
	
	/* 
	  Crea constructores - tiene el mismo nombre de la clase que los contiene
	  defini que va a recibir un dato del tipo numerico
	  
	*/
	public:
	Nodo(char d){
		dato	= d;
		enlace	= 0;
	}
	
	/* Sobrecagar el construtor  
		Sirve para agregar un nodo al inicio o intermedio
	*/
	Nodo(char d, Nodo* n){
		dato=d;
		enlace=n;
	}
	
	/* Crea metodo que devuelva el valor del nodo (dato) */
	Dato datonodo() const{
		return dato;
	}
	
	/* Metodo que devuelve el enlace del nodo */
	Nodo* enlacenodo() const{ 
		return enlace;
	}
	
	/* cambiar el enlace de un nodo */
	void ponerenlace(Nodo* sgte){
		enlace=sgte;
	}
	
};
