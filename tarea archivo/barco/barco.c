#include "barco.h"

struct barco *crearBarco(int cantidadTotalCargas){
    struct barco *barco = (struct barco *)malloc(sizeof(struct barco));
    barco->cargaPorLLevar = (struct carga **)malloc(sizeof(struct carga*) * cantidadTotalCargas);
    barco->pesoCargas = 0;
    barco->valorCargas = 0;
    barco->cantidadTotalCargas = cantidadTotalCargas;

    return barco;
}


void agregarCargas(struct barco *barco, struct carga **cargas){

    for (int i = 0; i < barco->cantidadTotalCargas; i++)
    {
        barco->cargaPorLLevar[i] = cargas[i];
        barco->pesoCargas += getPeso(cargas[i]);
        barco->valorCargas += getValor(cargas[i]);
    }

}



