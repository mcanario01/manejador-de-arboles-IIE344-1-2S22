#include "manejaArbol.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void recargar(FILE * archivo, Arbol &arbol)
{
    char etiqueta_arbol;
    fscanf(archivo, "%c", &etiqueta_arbol);
    creaRaiz(etiqueta_arbol);
    return;
}