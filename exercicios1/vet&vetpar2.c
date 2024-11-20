#include <stdio.h>

/*3. Declarar dois vetores X e Y de inteiros com tamanho 5 como variáveis globais. Fazer as seguintes
funções:
• Fleitura() : Le os elementos vetor X;
• Fcopiainv (): Copia os elementos do vetor X no vetor Y na ordem invertida, ou seja, o primeiro de
X na última posição de Y, o segundo de X na penúltima posição de Y e assim sucessivamente;
• Fimprime( ): Imprime o vetor Y obtido.*/

int vetX[5], vetY[5];

void f_leitura(){
    for(int i = 0; i<5; i++){
        printf("Entre com os elementos do vetor X: ");
        scanf("%d", &vetX[i]);
    }
}

void f_copiainv(){
    for (int i = 0; i < 5; i++) {
        vetY[i] = vetX[5 - 1 - i];
}
}

void f_imprime(){
    for(int i = 0; i<5 ;i++){
        printf("\n%d", vetY[i]);
    }
}

int main(){
    f_leitura();
    f_copiainv();
    f_imprime();
}