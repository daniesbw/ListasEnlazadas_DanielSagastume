#ifndef NODO_H
#define NODO_H
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

#include "tipo_elemento.h"

class Nodo
{
	public:
		Nodo();
		Nodo(tipo_elemento*);
		void setData(tipo_elemento*);
		void setNext(Nodo*);
		Nodo* getNext();
		tipo_elemento* getData();
		
		/*
			Operaciones
			Daniel Sagastume - 12041018
		*/
		
		void imprime(Nodo*);
		void inserta(Nodo*, int, Nodo*);
		Nodo* siguiente(int, Nodo*);
		Nodo* anterior(int, Nodo*);
		int primero(Nodo*);
		int finL(Nodo*);
		int localiza(Nodo*, Nodo*);
		Nodo* recupera(int, Nodo*);
		void suprime(int, Nodo*);
		void anula(Nodo*);
		~Nodo();
	private:
		tipo_elemento* data;
		Nodo* next;
};

#endif