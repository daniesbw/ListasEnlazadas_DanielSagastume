#include "Prueba.h"

void Prueba::casoPrueba(){
	Nodo* n;
	Nodo* sentinela;
	Nodo* L;

	//Primer elemento
	n=new Nodo();
	n->setData(new tipo_elemento(23));
	sentinela=L=n;

	//Segundo sentinela
	n=new Nodo();
	n->setData(new tipo_elemento(20));
	sentinela->setNext(n);//Conectamos el nodo actual con el siguiente
	sentinela=sentinela->getNext();//Actualizamos el sentinela
	
	//Segundo sentinela
	n=new Nodo();
	n->setData(new tipo_elemento(185));
	sentinela->setNext(n);//Conectamos el nodo actual con el siguiente
	sentinela=sentinela->getNext();//Actualizamos el sentinela
	
	//Segundo sentinela
	n=new Nodo();
	n->setData(new tipo_elemento(200));
	sentinela->setNext(n);//Conectamos el nodo actual con el siguiente
	sentinela=sentinela->getNext();//Actualizamos el sentinela
	//Segundo sentinela
	n=new Nodo();
	n->setData(new tipo_elemento(1000));
	sentinela->setNext(n);//Conectamos el nodo actual con el siguiente
	sentinela=sentinela->getNext();//Actualizamos el sentinela

	//Tercer elemento
	n=new Nodo();
	n->setData(new tipo_elemento(27));
	sentinela->setNext(n);
	
	//Ultimo elemento
	n=new Nodo();
	sentinela=sentinela->getNext();
	n->setData(new tipo_elemento(29));
	sentinela->setNext(n);

	//Finalizar lista
	n->setNext(NULL);
	cout<<"Lista: ";
	L->imprime(L);
	cout<<endl;
	
	cout<<"Fin de L:"<<L->finL(L)<<endl;
	cout<<endl;
	//Siguiente
	cout<<"El dato siguiente fue: "<<L->siguiente(2,L)->getData()->getElemento()<<endl;
	
	//Anterior
	cout<<"El dato anterior fue: "<<L->anterior(2,L)->getData()->getElemento()<<endl;
	cout<<endl;
	//Insertar
	L->inserta(new Nodo(new tipo_elemento(504)), 3, L);
	cout<<"Lista: ";
	L->imprime(L);
	cout<<endl;
	cout<<"Fin de L:"<<L->finL(L)<<endl;
	
	
	//Probar Suprimir
	cout<<endl;
	cout<<"================PORBAR SUPRIMIR================"<<endl;
	L->suprime(2, L);
	cout<<"Lista: ";
	L->imprime(L);
	cout<<endl;
	cout<<"Fin de L:"<<L->finL(L)<<endl;
	cout<<"================Fin prueba suprimir============"<<endl;
	cout<<endl;
	
	//LIBERAR MEMORIA
	L->anula(L);
	
	
}