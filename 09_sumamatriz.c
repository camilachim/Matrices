//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

//Función principal para la ejecución del programa
int main(int argc, char const *argv[]){

    //Definir variables
    int A[M][M];
    int B[M][M];
    int R[M][M];
    int filas = M, columnas = M;
    
    printf ("El programa presentado te imprimira una matriz de orden MxM\n");

    //Ingreso de la matriz A
    printf("Ingrese la matriz A\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("A[%d][%d]: ",i, j);
            scanf("%d", &A[i][j]);
        }
    }

    //Ingreso de la matriz B
    printf("Ingrese la matriz B\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("B[%d][%d]: ",i, j);
            scanf("%d", &B[i][j]);
        }
    }

    //Impresión de la matriz A
    printf("Matriz A:\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t",A[i][j]);
        }
        printf("\n");
    }

    //Impresión de la matriz B
    printf("Matriz B:\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t",B[i][j]);
        }
        printf("\n");
    }
    
    //Suma de Matrices
    printf ("La matriz resultante es:\n");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            R[i][j] = A[i][j] + B[i][j];
        }
    }

    //Imprimir matriz resultante
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t", R[i][j]);
        }
        printf("\n");
    }
    return 0;
}
