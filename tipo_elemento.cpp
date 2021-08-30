#include "tipo_elemento.h"

tipo_elemento::tipo_elemento(int pData){
	this->data=pData;
}

int tipo_elemento::getElemento(){
	return this->data;
}

void tipo_elemento::setData(int pData){
	this->data=pData;
}