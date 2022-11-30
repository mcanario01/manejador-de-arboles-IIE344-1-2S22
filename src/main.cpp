#include "./TDA-Arbol/arbol.h"
#include "manejaArbol.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <regex>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Argumentos incorrectos.");
        return 1;
    }

    bool termino = true;
    while (termino)
    {
        FILE * archivo = fopen(argv[1], "a+");
        printf("\n - - - - - MANEJADOR DE ARBOLES - - - - - \n\n");
        printf("\tSeleccione una opción:\n\n");
        printf("\t\t1. Opción 1\n");
        printf("\t\t2. Opción 2\n");
        printf("\t\t3. Opción 3\n");
        printf("\t\t4. Opción 4\n");
        printf("\t\t5. Opción 5\n");
        printf("\t\t6. Salir\n");
        
        printf("\nOpción: ");
        int opcion;
        scanf("%d", &opcion);

        switch (opcion)
            {
            case 1:
            {
                Arbol arbol1;
                recargar(archivo, arbol1);
                char etiqueta_arbol = etiqueta(arbol1);
                //printf("%c", etiqueta_arbol);
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {
                termino = false;
                break;
            }

            default:
            {
                printf("Opción invalida!");
                break;
            }
        }
    }
}