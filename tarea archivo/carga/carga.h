#ifndef CARGA_H
#define CARGA_H

#include <stdio.h>
#include <stdlib.h>

struct carga{
    int id;
    int peso;
    int valor;
};

struct carga *createCarga(int id, int peso, int valor);

int getId(struct carga *carga);

int getPeso(struct carga *carga);

int getValor(struct carga *carga);

void setValor(struct carga *carga, int valor);

void setPeso(struct carga *carga, int peso);

void printCarga(struct carga *carga);








#endif 

