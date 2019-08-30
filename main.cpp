#include <iostream>
#include "Lista.h"
using namespace std;
typedef std::string Dato;

int main() {
	
	Lista lista;
	
	lista.crearlista();
	
	lista.insertarinicio("Juan");
	
	lista.insertarultimo("Jose");
	lista.insertarultimo("Pedro");
	
	lista.insertarinicio("Alberto");
	
	lista.insertarultimo("Juan");
	lista.insertarultimo("Francisco");
	lista.insertarultimo("Pedro");
	
	lista.eliminar("Juan");

	
	lista.visualizar();
	
	return 0;	
}
