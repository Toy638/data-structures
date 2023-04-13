#include "solucion.h"


void generar_combinatoria(int numero){

    int residuo = 0;
    while (numero>0)
    {
       residuo = numero % 2;
       printf("%d", residuo);
       numero = numero / 2;
    }
    

    


//    int exponente = numero *numero;
//    int arreglo[numero];
    
//    for (int i = 0; i < exponente; i++){
//        for (int j = 0; j < numero; j++){
//            arreglo[j] = i % 2;
//            i = i / 2;
//            printf("%d",arreglo[j]);
//            printf("\n");
//        }  
//    }
}
