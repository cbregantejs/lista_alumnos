#include <iostream>
#include "Nodo.h"
using namespace std;

/* crea una referencia - tipo definido */
typedef char Dato;

class Lista{	
	/* Modicaderes de acceso de seguridad 
		(herencia)
	   protected- Protejido
	   Public	- publico
	   Private	- privado
	*/
	protected:
		/* va tener la referencia para indicar a quien apunta */	
		Nodo* primero;
	
	public:
		/**/
		Lista(){};
		void crearlista();
		void insertarcabezalista(Dato entrada);
		void visualizar();
		Nodo* ultimo();
		Nodo* buscarlista(Dato destino);
		void insertarlista(Nodo* anterior, Dato entrada);
		void insertarultimo(Dato entrada);
		void eliminar(Dato entrada);
		
};

void Lista::crearlista(){
	primero=0;	
}

void Lista::insertarcabezalista(Dato entrada){
	Nodo* nuevo;
	nuevo = new Nodo(entrada);

	/*  */
	nuevo->ponerenlace(primero);
	/* enlasa al nuevo nodo */
	primero = nuevo;
}

Nodo* Lista::ultimo(){
	Nodo* p = primero;
	if (p == NULL) throw "Error, la vista vacia";
	while (p->enlacenodo()!=NULL) 
		p=p->enlacenodo();
	
	return p;
}

Nodo* Lista::buscarlista(Dato destino){
	Nodo* indice;
	for (indice=primero; indice!=NULL; indice=indice->enlacenodo())
		if (destino==indice->datonodo())
			return indice;
	return NULL;
}

void Lista::insertarultimo(Dato entrada){
	Nodo* ultimo = this->ultimo();
	
	Nodo* nodo = new Nodo(entrada);
	
	ultimo->ponerenlace(nodo);
	
}

void Lista::eliminar(Dato entrada){
	Nodo* actual, * anterior;
	bool encontrado;
	actual = primero;
	anterior = NULL;
	encontrado = false;
	
	while ((actual != NULL) && !encontrado){
		encontrado = (actual->datonodo()==entrada);
		if(!encontrado){
			anterior=actual;
			actual=actual->enlacenodo();
		}
	}
	if (actual != NULL){
		if(actual==primero){
			primero=actual->enlacenodo();
		}
		else{
			anterior->ponerenlace(actual->enlacenodo());
		}
		delete actual;
	}
}

void Lista::visualizar(){
	Nodo* nodo;
	nodo = primero;
	
	while(nodo!=NULL){
		cout << nodo->datonodo() << endl;
		nodo = nodo->enlacenodo();
	}
	
}

