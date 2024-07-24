//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

//Funcción para imprimir las esquinas de la matriz
void esquinas(int matriz[M][M], int filas, int columnas){
    if (filas > 0 && columnas > 0){
        printf ("La esquina superior izquierda es: %d\n", matriz[0][0]);
        printf ("La esquina superior derecha es: %d\n", matriz[0][columnas -1]);
        printf ("La esquina inferior izquierda es: %d\n", matriz[filas - 1][0]);
        printf ("La esquina inferior derecha es: %d\n", matriz[filas - 1][columnas - 1]);
    }
}

//Función principal para la ejecución del programa
int main(int argc, char const *argv[]){

    //Definir variables
    int A[M][M];
    int filas = M, columnas = M;
    
    printf ("El programa presentado te imprimira una matriz de orden MxM\n");

    //Ingreso de la matriz

    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            printf("Ingrese los valores A[%d][%d]: ",i, j);
            scanf("%d", &A[i][j]);
        }
    }

    //Impresión de la matriz
    printf("La matriz que ingresaste es:\n ");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf ("Los elementos de las esquinas son:\n");
    esquinas(A, filas, columnas);
    return 0;
}
