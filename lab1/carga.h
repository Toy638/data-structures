#ifndef CARGA_H
#define CARGA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carga{
    int id;
    int peso;
    int valor;
};

//todo: se crea la carga y se retorna un puntero a una carga
// se reserva memoria 
// se asignan valores
struct carga *createCarga(int previousID, int peso, int valor);


//todo: Imprime los valores de la carga que ingresa por parametro
//Se imprime uno a uno los valores
void cargaPrint(struct carga *carga);

//todo: se libera la memoria de la carga que ingresa por parametro
//free
void cargaFree(struct carga *carga);


#endif