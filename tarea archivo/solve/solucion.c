#include "solucion.h"

void generateCombinations(struct solucion *solucion, int quantifyOfItems){

    int quantifyOfCombinations = pow(2, quantifyOfItems);

    solucion->combinations = (bool **)malloc(sizeof(bool*) * quantifyOfCombinations);

    for (int i = 0; i < quantifyOfCombinations; i++)
    {
        solucion->combinations[i] = (bool *)malloc(sizeof(bool) * quantifyOfItems);

        for (int j = 0; j < quantifyOfItems; j++)
        {
            solucion->combinations[i][j] = i% 2;
        }
    }
}


