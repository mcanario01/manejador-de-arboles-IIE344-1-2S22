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

}

void armarArbolSegunListaLA(Arbol &arbol, ListaLA lista_de_arbol)
{
    //construcción del arbol
    for (int i = primero(lista_de_arbol); i < fin(lista_de_arbol); i = siguiente(i, lista_de_arbol))
    {
        //dato auxiliar
        datosLA dato_aux = recupera(i, lista_de_arbol);

        printf("%d %c %d\n", dato_aux.pos_hijo_izq, dato_aux.etiqueta, dato_aux.pos_herm_der);

        //construccion de arbol
        for(int j = primero(lista_de_arbol); i < fin(lista_de_arbol); i = siguiente(i, lista_de_arbol))
        {
            if(dato_aux.pos_hijo_izq == j)
            {
                datosLA dato_aux_aux = recupera(j, lista_de_arbol);
                Arbol arbol_aux = creaRaiz(dato_aux.etiqueta);
                insertaHijoMasIzq(arbol, arbol_aux);
            }
        }
    }
}