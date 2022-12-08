#include "./manejaArbol.h"

#include "./TDA-Arbol/arbol.h"
#include "./TDA-Lista-v2/listaLecturaArbol.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <syscall.h>


void recargar(FILE * archivo, Arbol &arbol)
{
    //lectura de raiz
    printf("Check 1.\n");
    char etiqueta_arbol[1];
    fscanf(archivo, "%s", etiqueta_arbol);

    printf("%s", etiqueta_arbol);

    arbol = creaRaiz(etiqueta_arbol[1]);
    printf("Check 2.\n");

    ListaLA listaDeNodosArbol;
    ListaLA listaDeNodosHojaArbol;

    //creación de lista para leer todos los nodos del arbol
    while (!feof(archivo))
    {
        printf("Check recarga.\n");
        datosLA datosNodo;
        char aux[2], aux1[2];
        fscanf(archivo, "%s %c %s", aux, &datosNodo.etiqueta, aux1);
        datosNodo.pos_hijo_izq = (int)strtol(aux, 0, 10);
        datosNodo.pos_herm_der = (int)strtol(aux1, 0, 10);
        inserta(datosNodo, fin(listaDeNodosArbol), listaDeNodosArbol);
    }
    armarArbolSegunListaLA(arbol, listaDeNodosArbol);

}

void armarArbolSegunListaLA(Arbol &arbol, ListaLA lista_de_arbol)
{
    //construcción del arbol
    for (int i = primero(lista_de_arbol); i < fin(lista_de_arbol); i = siguiente(i, lista_de_arbol))
    {
        //dato auxiliar
        datosLA dato_aux_padre = recupera(i, lista_de_arbol);
        datosLA dato_aux_hijo = recupera(dato_aux_hijo.pos_hijo_izq, lista_de_arbol);
        datosLA dato_aux_herm_der = recupera(dato_aux_padre.pos_herm_der, lista_de_arbol);
        Arbol arbol_aux_padre = creaRaiz(dato_aux_padre.etiqueta);
        Arbol arbol_aux_hijo = creaRaiz(dato_aux_padre.etiqueta);
        Arbol arbol_aux_herm_der = creaRaiz(dato_aux_herm_der.etiqueta);

        insertaHijoMasIzq(arbol_aux_padre, arbol_aux_hijo);
        insertaHermanoDer(arbol_aux_padre, arbol_aux_herm_der);
    }
}