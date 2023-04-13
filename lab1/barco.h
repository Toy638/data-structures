#ifndef SOLUCION_H
#define SOLUCION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct barco
{
    int *carga_llevar;
    int peso_maximo;
    int valor_carga_llevar;
    int peso_carga_llevar;
};

struct barco *crear_barco(int peso_max, int cantidad_elementos_por_cargar);

void destruir_barco(struct barco *barco);

void imprimir_barco(struct barco *barco, int cantidad_elementos_por_cargar);


#endif






























