//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

//Funcción para imprimir los números del centro de la matriz
void matrizcentral(int matriz[M][M], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if ((i == 0 && j == 0) || (i == 0 && j == columnas - 1) ||(i == filas - 1 && j == 0) ||(i == filas - 1 && j == columnas - 1)){
                printf("\t");
            } else {
                printf("%d\t", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

//Función principal para la ejecución del programa
int main(int argc, char const *argv[]){

    //Definir variables
    int A[M][M];
    int filas = M, columnas = M;
    
    printf ("El programa presentado te imprimira una matriz de orden MxM\n");

    //Ingreso de la matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("Ingrese los valores A[%d][%d]: ",i, j);
            scanf("%d", &A[i][j]);
        }
    }

    //Impresión de la matriz
    printf("La matriz que ingresaste es:\n ");
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("La matriz central es:\n");
    matrizcentral(A, filas, columnas);
   
    return 0;
}

