#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main()[
    nodo *primero = NULL;
    nodo *temp;
    nodo *otro;
    primero = crear_nodo(1);
    otro=crear_nodo(8),
    otro->sig = crear_nodo(2);
    primero->sig = crear_nodo(2);
    primero->sig->sig = crear_nodo(3);
    printf("%p\n", primero);
    print_nodo(primero);

    primero->sig = crear_nodo(2);
    printf("%p\n", primero->sig);
    print_nodo(primero->sig);

    borrar_nodo(primero->sig);
    borrar_nodo(primero);
    return 0;
]