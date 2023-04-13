#include <stdio.h>

int *quickSort(int *array, int low, int high);

int *quickSort(int *array, int low, int high){

    int pivot = array[high];
    int i = low - 1;
    int j = low;
    int temp;

    for(j = low; j < high; j++){
        if(array[j] <= pivot){
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    temp = array[i+1];
    array[i+1] = array[high];
    array[high] = temp;

    return array;

}

int main(int *argc, char *argv[]){


}