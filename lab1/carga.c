#include "carga.h"


struct carga *createCarga(int id, int peso, int valor){

    struct carga *cargaRetorno = (struct carga*)malloc(sizeof(struct carga));
    
    cargaRetorno->id = id;
    cargaRetorno->peso = peso;
    cargaRetorno->valor = valor;
    return cargaRetorno;

}

void cargaPrint(struct carga *carga){

    printf("Hola, soy una carga");
    printf( "id: %d \n Peso: %d \n Valor: %d \n", carga->id, carga->peso, carga->valor);

}


void cargaFree(struct carga *carga){

    free(carga);

}