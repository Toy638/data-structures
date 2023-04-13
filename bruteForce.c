#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int **bruteForce(int size){
    int quantifyOfCombinations = pow(2, size);
    int **combinations = (int **)malloc(quantifyOfCombinations * sizeof(int *));

    for (int i = 0; i < quantifyOfCombinations; i++)
    {
        int decimalNumber = i;
        combinations[i] = (int *)malloc(size * sizeof(int));
        for (int j = 0; j < size; j++)
        {
            combinations[i][j] = decimalNumber % 2;
            decimalNumber /= 2;
        }
    }

    return combinations;
    


};

void printCombinations(int **combinations, int size, int quantifyOfCombinations){
    for (int i = 0; i < quantifyOfCombinations; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", combinations[i][j]);
        }
        printf("\n");
    }

}


int main(int argc, char *argv[]){

    int size = 3;
    int **combinations = bruteForce(size);
    int quantifyOfCombinations = pow(2, size);
    printCombinations(combinations, size, quantifyOfCombinations);

    return 0;



}