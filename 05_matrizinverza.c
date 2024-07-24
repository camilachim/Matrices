//Librerias
#include <stdio.h>

//Función principal
int main() {
    float A[2][2];
    int i, j;
    float determinante;

    // Ingreso de la matriz 2x2
    printf("Ingrese los valores de la matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Calcular el determinante
    determinante = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    if (determinante == 0) {
        printf("La matriz no tiene inversa.\n");
        return 1;
    }

    //Arreglo A para almacenar los nuevos valores
    A[0][0] = A[1][1] / determinante;
    A[0][1] = -A[0][1] / determinante;
    A[1][0] = -A[1][0] / determinante;
    A[1][1] = A[0][0] / determinante;

    // Imprimir la matriz inversa
    printf("La matriz inversa es:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.1f\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
