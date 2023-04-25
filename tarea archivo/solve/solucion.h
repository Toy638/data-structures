#ifndef solucion_h
#define solucion_h
#include "../barco/barco.h"
#include "../carga/carga.h"
#include "../archivo/archivo.h"
#include <math.h>
#include <stdbool.h>

struct solucion{
    struct barco *barco;
    struct archivo *data;
    bool **combinations;

};

struct solucion *crearSolucion(char *filename);

void mostrarSolucion(struct solucion *solucion);

void generateCombinations(struct Solucion *solucion, int quantifyOfItems);

void solve(struct solucion *solucion);









#endif