#include <stdio.h>

/*4. Declarar quatro vetores de inteiros como variáveis globais onde os vetores A, B, C possuem tamanho
N = 5 e o vetor D possui tamanho 2*N (ou seja 10). O programa deve ter as seguintes funções:
• fleituraA() : Le os elementos do vetor A;
• fleituraB() : Le os elementos do vetor B;
• fsomaAB( ): Calcula a soma dos vetores A e B, armazenando o resultado no vetor C;
• fconcatenaAB( ): Concatena os dois vetores, armazenando o resultado no vetor D, colocando os
valores de A e em seguida os valores de B;
• fimprimeC( ): Imprime o vetor C;
• fimprimeD( ): Imprime o vetor D.*/
#define N 5

int vetA[N], vetB[N], vetC[N],vetD[2*N];

void fleituraA(){
    for(int i= 0; i<N; i++){
        printf("Entre com o indice %d do vetor A:", i+1);
        scanf("%d", &vetA[i]);
    }
}

void fleituraB(){
        for(int i= 0; i<N; i++){
        printf("Entre com o indice %d do vetor B:", i+1);
        scanf("%d", &vetB[i]);
    }
}

void fsomaAB(){
    for(int i=0; i<N ;i++){
        vetC[i] = vetA[i]+vetB[i];
    }
}
//Duvida Aqui
void fconcatenaAB(){
        for(int i=0; i<N*2 ;i++){
            vetD[i] = vetA[i];
    }
        for(int i=0; i<N*2 ;i++){
            vetD[i] = vetB[i];
    }   
}

void fimprimeC(){
    for(int i=0; i<N ;i++){
        printf("\n%d", vetC[i]);
    }
}

void fimprimeD(){
        for(int i=0; i<N ;i++){
        printf("\n%d", vetD[i]);
    }
}

void main(){
    fleituraA();
    fleituraB();
    fsomaAB();
    fconcatenaAB();
    fimprimeC();
    fimprimeD();
}