#include "barco.h"

struct barco *crear_barco(int peso_max, int cantidad_elementos_por_cargar){
    struct barco *barco = (struct barco*)malloc(sizeof(struct barco));

    barco->carga_llevar = (int*)malloc(sizeof(int)* cantidad_elementos_por_cargar);
    barco->peso_maximo = peso_max;
    barco->valor_carga_llevar = 0;
    barco->peso_carga_llevar = 0;

    return barco;  
};

void destruir_barco(struct barco *barco){
    free(barco);
}

void imprimir_barco(struct barco *barco, int cantidad_elementos_por_cargar){
    printf("Hola, soy un barco \n");
    printf("Carga a llevar: \n");

    for (int i = 0; i < cantidad_elementos_por_cargar; i++){
        printf(" %d", barco->carga_llevar[i]);
    }
    
    printf( "\nPeso maximo: %d \n Valor de la carga: %d \n Peso de la carga: %d \n", barco->peso_maximo, barco->valor_carga_llevar, barco->peso_carga_llevar);
}

