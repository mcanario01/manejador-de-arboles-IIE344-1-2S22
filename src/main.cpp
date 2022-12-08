/* Universidad de La Frontera
* Ingeniería Civil Telemática
*
* IIE-344 Estructura de Datos y Algoritmos
*
* Tarea 2
*
* Autor: Martin Tomás Canario Dauros (m.canario01@ufromail.cl)
* 
* Fecha: 7 de diciembre de 2022.
* 
* Descripción general del programa:
* Este programa es un manejador de arboles. Lee un arbol con la representación de 
* <<hijo más a la izquierda - hermano a la derecha>> de un archivo txt y logra manejar 
* ciertos aspectos del mismo, usa de programación con estructuras de C++.
*/

#include "./TDA-Arbol/arbol.h"
#include "./manejaArbol.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define debug true

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Argumentos incorrectos.");
        return 2;
    }

    bool termino = true;
    while (termino)
    {
        FILE * archivo = fopen(argv[1], "a+");
        int contador_debug = 0;
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
                //debug
                if(debug) contador_debug++; printf("Check %d.\n", contador_debug);

                recargar(archivo, arbol1);
                //debug
                if(debug) contador_debug++; printf("Check %d.\n", contador_debug);
                char etiqueta_arbol = etiqueta(arbol1);
                //debug
                if(debug) contador_debug++; printf("Check %d.\n", contador_debug);
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