#include <iostream>
#include "Lista.h"
using namespace std;
typedef char Dato;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Lista lista;
	
	lista.crearlista();
	
	lista.insertarcabezalista('J');
	lista.insertarcabezalista('Jx');
	/*lista.insertarultimo("Jose");
	lista.insertarultimo("Pedro");
	lista.insertarcabezalista("Alberto");
	lista.insertarultimo("Juan");
	lista.insertarultimo("Francisco");
	lista.insertarultimo("Pedro");*/
		
	/* Eliminar */
	/*lista.eliminar("Juan");*/
	
	/* Bucar nodo */	
	/*Nodo* nodo =  lista.buscarlista(''); 
	
	if (nodo==NULL)
		cout << "Nodo buscado no existe" << endl;
	else
		cout << "Nodo buscado si existe" << endl;
	*/
	
	lista.visualizar();
	
	return 0;	
}
