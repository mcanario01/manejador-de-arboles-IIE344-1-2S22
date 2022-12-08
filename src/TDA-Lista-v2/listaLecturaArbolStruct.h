#ifndef LISTA_LECTURA_ARBOL_STRUCT_H
#define LISTA_LECTURA_ARBOL_STRUCT_H

struct datosLA
{
	int pos_hijo_izq;
	char etiqueta;
	int pos_herm_der;
};

struct nodoLA
{
	struct datosLA dato;
	struct nodoLA* next;
	nodoLA(){
		next=NULL;
	}
	nodoLA(datosLA x){
		nodoLA();
		dato=x;
	}
};

struct ListaLA
{
	struct nodoLA* primero;
	ListaLA(){
		primero=NULL;
	}
};

#endif

