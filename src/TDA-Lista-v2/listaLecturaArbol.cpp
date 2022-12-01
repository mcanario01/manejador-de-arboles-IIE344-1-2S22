#include <stdio.h>
#include "listaLecturaArbol.h"

// Viernes 10/06
bool vacia(ListaLA lista){
	return fin(lista)==primero(lista);
}

int primero(ListaLA lista){
	return 1;
}

int anterior(int p, ListaLA lista){
	return p-1;
}

int siguiente(int p, ListaLA lista){
	return p+1;
}

// Martes 14/06
int fin(ListaLA lista){
	int c=1;
	nodoLA*aux = lista.primero;
	while(aux!=NULL){
		aux = aux->next;
		c++;
	}
	return c;
}

void inserta(datosLA x, int p, ListaLA &lista){
	nodoLA* nuevo = new nodoLA(x);
	nodoLA* aux = lista.primero;
	if(p == primero(lista)){
		nuevo->next = lista.primero;
		lista.primero = nuevo;
	}else{
		for(int i = 0 ; i < p - 2 ; i++){
			aux = aux->next;
		}
		nuevo->next = aux->next;
		aux->next = nuevo;
	}
}

datosLA recupera(int p, ListaLA lista){
	nodoLA* aux = lista.primero;
	for(int i = 1 ; i < p ; i++){
		aux = aux->next;
	}
	return aux->dato;
}
 
void suprime(int p, ListaLA &lista){
	nodoLA* aux = lista.primero;
	if(p == primero(lista)){
		lista.primero = aux->next;
	} else {
		nodoLA* aux2 = lista.primero;
		for(int i = 0 ; i < p - 2 ; i++){
			aux2 = aux2->next;
		}
		aux = aux2->next;
		aux2->next = aux->next;
	}
	aux->next = NULL;
	delete aux;
}

void anula(ListaLA &lista){
	while(!vacia(lista))
		suprime(primero(lista),lista);
}