#include "archivo.h"

struct archivo *archivo_crear(){

    struct archivo *archivo = (struct archivo* )malloc(sizeof(struct archivo));
    char nombre_archivo[100];
    char buffer[100];

    printf("Ingrese el nombre del archivo: \n");
    scanf("%s", &nombre_archivo);

    printf("nombre archivo: %s \n", nombre_archivo);

    strcpy(archivo->nombre_archivo, nombre_archivo);
    strcpy(buffer, nombre_archivo);
//    memcpy(buffer, nombre_archivo+7, strlen(nombre_archivo));

    printf("buffer: %s \n", buffer);
    strtok(buffer,  "_");
    archivo->n_cargas = atoi(strtok(NULL, buffer));
    archivo->peso_max = atoi(strtok(NULL, buffer));

    printf("cargas y pesos");
    printf("%d %d \n", archivo->n_cargas, archivo->peso_max);


    archivo->cargas = (struct carga **)malloc(sizeof(struct carga*) * archivo->n_cargas);

    for (int i = 0; i < archivo->n_cargas; i++)
    {
        archivo->cargas[i] = createCarga(0, 0, 0);
        printf("Archivo creado \n");
    }

    leerDatos(archivo);

    return archivo;
}


void leerDatos(struct archivo *archivo){

    FILE *fp;
    fp = fopen(archivo->nombre_archivo, "r");

    if (fp == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    else
    {
        printf("Archivo abierto exitosamente \n");
        int peso =  0;
        int valor = 0;
        //! posible problema de memoeria en los set
        //! posible condicion de borde en el numero de cargas
        for (int i = 0; i < archivo->n_cargas; i++)
        {
            printf("leyendo datos \n");
            fscanf(fp, "%d %d", &peso, &valor);
            setPeso(archivo->cargas[i], peso);
            setValor(archivo->cargas[i], valor);
        }   

        for (int i = 0; i < archivo->n_cargas; i++)
        {
            printf("Peso: %d Valor: %d \n", getPeso(archivo->cargas[i]), getValor(archivo->cargas[i]));
        }
        fclose(fp);
    }
    

    

}
