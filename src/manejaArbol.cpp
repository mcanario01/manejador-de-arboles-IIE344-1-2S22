#include "manejaArbol.h"
#include "./TDA-Arbol/arbol.h"
#include "./TDA-Lista-v2/listaLecturaArbol.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void recargar(FILE * archivo, Arbol &arbol)
{
    //lectura de raiz
    char etiqueta_arbol;
    fscanf(archivo, "%c", &etiqueta_arbol);
    arbol = creaRaiz(etiqueta_arbol);

    ListaLA listaDeNodosArbol;
    //creación de lista para leer todos los nodos del arbol
    while (!feof(archivo))
    {
        datosLA datosNodo;
        fscanf(archivo, "%d %c %d", &datosNodo.pos_hijo_izq, &datosNodo.etiqueta, &datosNodo.pos_herm_der);
        inserta(datosNodo, fin(listaDeNodosArbol), listaDeNodosArbol);
    }
    
    return;
}