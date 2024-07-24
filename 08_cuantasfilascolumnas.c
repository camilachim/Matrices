//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

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

    printf("El numero de filas es: %d\n", filas);
    printf("El numero de columnas es: %d\n", columnas);
    return 0;
}
