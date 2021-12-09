#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>

using namespace std;

class ArregloDinamico{
	
	string *arreglo;
	size_t tam;
	size_t cont;
	const static int max = 6;
	
	
public:
	ArregloDinamico();
	~ArregloDinamico();
	
	void insertarInicio(const string &c);
	void insertarFinal(const string &c);
	size_t size();
	
	string operator[](size_t p){
		return arreglo[p];
	}
	
private:
	void expandir();
	
	
};



#endif
