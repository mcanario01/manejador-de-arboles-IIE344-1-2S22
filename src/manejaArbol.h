#include "./TDA-Arbol/arbol.h"
#include "./TDA-Lista-v2/listaLecturaArbol.h"
#include <stdio.h>
#include <stdlib.h>

void recargar(FILE * archivo, Arbol &arbol);

void armarArbolSegunListaLA(Arbol &arbol, ListaLA lista_de_arbol);