#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico(){
	arreglo = new string[max];
	cont = 0;
	tam = max;
}


ArregloDinamico::~ArregloDinamico(){
	delete[] arreglo;
}

void ArregloDinamico::insertarFinal(const string &c){
	if(cont == tam){
		expandir();
	}
	arreglo[cont] = c;
	cont++;
}


void ArregloDinamico::insertarInicio(const string &c){
	if(cont == tam){
		expandir();
	}
	for(size_t x = cont; x > 0; x--){
		arreglo[x] = arreglo [x-1];
	}
	arreglo[0] = c;
	cont++;
}

size_t ArregloDinamico::size(){
	return cont;
}

void ArregloDinamico::expandir(){
	
	string *temp = new string[tam + max];
	
	for(size_t x = 0; x < cont; x++){
		temp[x] = arreglo[x];
	}
	delete[] arreglo;
	
	arreglo = temp;
	tam = tam + max;
	
}






















