#include <stdio.h>

/*Crie um programa que leia uma matriz de inteiros 3x3 e calcule a soma de todos os seus elementos.*/

void main(){
    int matriz[3][3], soma = 0;

    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Entre com os elementos [%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i<3; i++){
        for(int j = 0;j<3; j++){
            soma += matriz[i][j];
        }
    }
    printf("\nA soma e %d", soma);
}