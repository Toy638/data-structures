#include "carga.h"

struct carga *createCarga(int id, int peso, int valor){

    struct carga *carga = (struct carga *)malloc(sizeof(struct carga));
    
    carga->id = id;
    carga->peso = peso;
    carga->valor = valor;

    return carga;
}

int getId(struct carga *carga){
    return carga->id;
}

int getPeso(struct carga *carga){
    return carga->peso;
}

int getValor(struct carga *carga){
    return carga->valor;    
}

void setId(struct carga *carga, int id){
    carga->id = id;
}

void setPeso(struct carga *carga, int peso){
    carga->peso = peso;
}

void setValor(struct carga *carga, int valor){
    carga->valor = valor;
}

void printCarga(struct carga *carga){
    printf("Hola soy una carga: \n");
    printf("id: %d\n", carga->id);
    printf("peso: %d\n", carga->peso);
    printf("valor: %d\n", carga->valor);
}
