#include "carga.h"

int main(){

    struct carga *carga1 = carga(0, 10, 20);
    cargaPrint(carga1);
    cargaFree(carga1);
    return 0;

}