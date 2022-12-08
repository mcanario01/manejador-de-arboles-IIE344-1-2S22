#include <stdio.h>
#include "./listaLecturaArbolStruct.h"

/* Prototipos */
// Viernes 10/06
bool vacia(ListaLA lista);
int primero(ListaLA lista);
int anterior(int p, ListaLA lista);
int siguiente(int p, ListaLA lista);

// Martes 14/06
int fin(ListaLA lista);
void inserta(datosLA x, int p, ListaLA &lista);
datosLA recupera(int p, ListaLA lista);
int localiza(datosLA x, ListaLA lista);

// Viernes 17/06
void imprime(ListaLA lista);
void suprime(int p, ListaLA &lista);
void anula(ListaLA &lista);