#include "barco.h"

int main(){

    struct barco *barco = crear_barco(100, 10);
    imprimir_barco(barco,10);
    destruir_barco(barco);
    return 0;

}