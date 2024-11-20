#include <stdio.h>

/*3. Escreva um programa que peça ao usuário o número de linhas e colunas, crie uma matriz de inteiros
com essas dimensões e preencha cada elemento com valores digitados pelo usuário. Em seguida,
exiba a matriz na tela.*/

void main(){
    int linhas, colunas;


    printf("Entre com o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Entre com o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    for(int i = 0; i<linhas; i++){
        for(int j = 0; j< colunas ; j++){
            printf("\nEntre com os elementos [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}