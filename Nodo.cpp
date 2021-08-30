#include "Nodo.h"

Nodo::Nodo() {

}

Nodo::Nodo(tipo_elemento* data) {
	this->data=data;
}

void Nodo::setData(tipo_elemento* p) {
	this->data=p;
}

void Nodo::setNext(Nodo* pNext) {
	this->next=pNext;
}

Nodo* Nodo::getNext() {
	return this->next;
}

tipo_elemento* Nodo::getData() {
	return this->data;
}

void Nodo::imprime(Nodo* L) {
	tipo_elemento* temp=L->getData();
	cout<<temp->getElemento()<<", ";
	if(L->getNext()!=NULL) {
		L->getNext()->imprime(L->getNext());
	}
}

int Nodo::finL(Nodo* L) {
	int p=1;
	Nodo* actual=L;
	while(actual!=NULL){
		if(actual->getNext()!=NULL){
			p+=1;
			actual=actual->getNext();
		}else{
			return p+1;
		}
	}
}

int Nodo::primero(Nodo* L) {
	if(L->getData()!=0) {
		return 1;
	} else {
		return L->finL(L);
	}
}

void Nodo::inserta(Nodo* pNuevo, int pos, Nodo* L) {
	Nodo* actual=L;
	Nodo* segundaParte;
	int i=1;
	while(actual!=NULL){
		if(i==pos){
			cout<<"Insertando"<<endl;
			segundaParte=actual->getNext();//Partimos en dos partes la lista
			actual->setNext(pNuevo);//La primera parte de la lista añadimos el nuevo nodo
			pNuevo->setNext(segundaParte);//Volvemos a unir la lista
		}else{
			actual=actual->getNext();
		}
		i++;
	}
}


Nodo* Nodo::siguiente(int p, Nodo* Lista) {
	Nodo* actual=Lista;
	int i=1;
	while(actual!=NULL) {
		if(actual->getNext()!=NULL) {
			if(i==p) {
				return actual->getNext();
			} else {
				actual= actual->getNext();
			}
		} else {
			return new Nodo(new tipo_elemento((Lista->finL(Lista))));//Retorna finL si el siguiente se pasa
		}
		i++;
	}
}

Nodo* Nodo::anterior(int p, Nodo* Lista) {
	Nodo* actual=Lista;
	Nodo* anterior;
	int i=1;
	while(actual!=NULL) {
		if(i==p) {
			if(anterior!=NULL) { //Safe coding
				return anterior;
			}
		} else {
			anterior=actual;
			actual= actual->getNext();
		}
		i++;
	}
}


int Nodo::localiza(Nodo* a, Nodo* l)
{
	int i=0;
	Nodo* actual=l;
	bool encontrado=false;
	while(actual!=NULL){
		if(a==actual){
			return i;
			encontrado=true;
		}else{
			actual=actual->getNext();
		}
		i++;
	}
	if(encontrado==false){
		return l->finL(l);
	}
}

Nodo* Nodo::recupera(int p, Nodo* L)
{
	int i=0;
	Nodo* actual=L;
	while(actual!=NULL){
		if(i==p){
			return actual;
		}else{
			actual=actual->getNext();
		}
		i+=1;
	}
}

void Nodo::suprime(int p, Nodo* Lista){
	int i=0;
	Nodo* actual=Lista;
	Nodo* anterior;
	while(actual!=NULL){
		if(i==p&&actual->getNext()!=NULL){
			Nodo* segundaParte=actual->getNext();//Se parte en dos la lista
			delete actual;//Se borra el deseado
			anterior->setNext(segundaParte);//Se vuelve a unir la lista
			break;
		}else{
			anterior=actual;
			actual=actual->getNext();
		}
		i++;
	}
}


void Nodo::anula(Nodo* L)
{
	int i=0;
	Nodo* actual=L;
	Nodo* anterior;
	while(actual!=NULL){
		anterior=actual;
		actual=actual->getNext();
		delete anterior;
		i++;
	}
	cout<<"Eliminados total: "<<i<<endl;
}
Nodo::~Nodo()
{
	delete this->data;
}










