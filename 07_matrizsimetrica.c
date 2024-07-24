//Libreria
#include <stdio.h>

//Define las dimensiones maximas de la matriz
#define M 4

// Función para verificar si una matriz es simétrica
int simetrica(int matriz[M][M], int filas, int columnas) {
    if (filas != columnas){
        return 0;
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
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
    printf("\n La matriz que ingresaste es:\n ");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf ("%d\t",A[i][j]);
        }


        printf("\n");
    }

    // Verificar si la matriz es simétrica
    if (simetrica(A, filas, columnas)) {
        printf("La matriz es simétrica.\n");
    } else {
        printf("La matriz no es simétrica.\n");
    }

    return 0;
}
