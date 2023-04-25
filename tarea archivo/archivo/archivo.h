#ifndef archivo_h
#define archivo_h
#include "../carga/carga.h"
#include <string.h>


struct archivo
{
    char nombre_archivo[100];
    struct carga **cargas;
    int n_cargas;
    int peso_max;
};

struct archivo *archivo_crear();

void leerDatos(struct archivo *archivo);

void printArchivo();



#endif