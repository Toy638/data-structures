#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "carga.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct archivo{
    char nombre[50];
    struct carga **cargas;
    int cantidadCargas;
    int variablesXCarga;
};


//constructor

//todo: crea el archivo -> O
// Se reserva memoria
// se le asgina un valor a las variables
struct archivo *createArchivo(char *nombreDelArchivo, int cantidadCargas);

//todo: liberacion -> O 
void liberarArchivo(struct archivo *archivo);

//todo: impresion -> O
void imprimeArchivo(struct archivo *archivo);


//Otras operaciones
// todo: leer los datos del archivo al que se refiere
void leerDatos(struct archivo *archivo);

#endif