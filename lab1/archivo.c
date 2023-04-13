#include "archivo.h"


struct archivo *createArchivo(char *nombreDelArchivo, int cantidadDeCargas){

    struct archivo *archivoRetorno = (struct archivo*)malloc(sizeof(struct archivo));
    
    strcpy(archivoRetorno->nombre, nombreDelArchivo);

    archivoRetorno->cargas = (struct carga **)malloc(sizeof(struct carga*)*cantidadDeCargas);
    
    archivoRetorno->cantidadCargas = cantidadDeCargas;
    archivoRetorno->variablesXCarga = 2;

    return archivoRetorno;

}


void liberarArchivo(struct archivo *archivo){
    free(archivo->cargas);
    free(archivo);
}

void imprimeArchivo(struct archivo *archivo){

    printf("Nombre del archivo: %s \n", archivo->nombre);
    printf("Cantidad de cargas: %d \n", archivo->cantidadCargas);
    printf("Variables por carga: %d \n", archivo->variablesXCarga);

    for(int i = 0; i < archivo->cantidadCargas; i++){
        printf("Carga %d \n", i);
        cargaPrint(archivo->cargas[i]);
    }

}

void leerDatos(struct archivo *archivo){

    FILE *fp;
    fp = fopen(archivo->nombre, "r");

    if(fp == NULL){
        printf("Error al abrir el archivo");
        exit(1);
    }
    else{
        printf("El archivo se abrio exitosamente");

        int id = 0;
        int peso = 0;
        int valor = 0;

        while (!feof(fp))
        {
            fscanf(fp, "%d %d",&peso, &valor);
            archivo->cargas[id] = createCarga(id, peso, valor);
            id ++;
        }

    }

}







