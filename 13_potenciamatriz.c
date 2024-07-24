//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

//Función principal para la ejecución del programa
int main(int argc, char const *argv[]){

    //Definir variables
    int A[M][M];
    int R[M][M];
    int filas = M, columnas = M;
    
    printf ("El programa presentado te imprimira una matriz de orden MxM\n");

    //Ingreso de la matriz A
    printf("\nIngrese la matriz A\n");
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("A[%d][%d]: ",i, j);
            scanf("%d", &A[i][j]);
        }
    }

    //Impresión de la matriz A
    printf("\n La matriz A es:\n ");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }

    //Multiplicación repetida
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            R[i][j] = 0;
            for (int k = 0; k < columnas; k++) {
                R[i][j] += A[i][k] * A[k][j];
            }
        }
    }
    
    //Imprimir matriz resultante
    printf("\nLa matriz resultante elevada al cuadrado es:\n");
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t", R[i][j]);
        }
        printf("\n");
    }
    return 0;
}
