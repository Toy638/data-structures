#include "archivo.h"

int main(int argc, char *argv[]){


    struct archivo *archivo = createArchivo("archivo.txt", 10);
    leerDatos(archivo);

    imprimeArchivo(archivo);
    liberarArchivo(archivo);
    return 0;

}
