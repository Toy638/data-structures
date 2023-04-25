#include "carga.h"


int main(int argc, char *argv[]){

    struct carga *carga = createCarga(1, 2, 3);
    printCarga(carga);
    return 0;

}