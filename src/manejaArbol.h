#include "./TDA-Arbol/arbol.h"
#include "./TDA-Lista-v2/listaLecturaArbol.h"
#include <stdio.h>
#include <stdlib.h>

/* 
* Nombre de la función: recargar.
* Tipo de función: void.
* Parámetros: 
    “archivo” de tipo FILE *.
    "arbol" de tipo Arbol
* Dato de retorno: N/A
* Descripción de la función: 
	Lee un archivo .txt para armar un arbol con la sintaxis que tenga dicho arbol.
*/
void recargar(FILE * archivo, Arbol &arbol);

/* 
* Nombre de la función: armarArbolSegunListaLA.
* Tipo de función: void.
* Parámetros: 
    “arbol” de tipo Arbol.
    "lista_de_arbol" de tipo ListaLA
* Dato de retorno: N/A
* Descripción de la función: 
	Arma un arbol según una ListaLA.
*/
void armarArbolSegunListaLA(Arbol &arbol, ListaLA lista_de_arbol);