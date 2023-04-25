#ifndef barco_h
#define barco_h
#include "carga/carga.h"


struct barco
{
    struct carga **cargaPorLLevar;
    int valorCargas;
    int pesoCargas;
    int cantidadTotalCargas;
};

struct barco *crearBarco(int cantidadTotalCargas);
void agregarCargas(struct barco *barco, struct carga **cargas);
// void setValorCargas(struct barco *barco, int valorCargas);
// void setPesoCargas(struct barco *barco, int pesoCargas);


//todo: ver como liberar memoria
//void descargarBarco(struct barco *barco);


void mostrarCargas(struct barco *barco);



#endif
