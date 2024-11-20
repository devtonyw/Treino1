#include <stdio.h>

/*2. As notas de uma turma de N alunos são lidas e armazenadas em um vetor. Fazer um programa
contendo funções para:
• ler as N notas, armazenando-as em um vetor (este deve ser variável global);
• calcular e retornar a média da turma;
• receber o valor da media calculada como parâmetro e retornar a porcentagem de pessoas acima
da média.*/

#define N 5

int vet[5];

void ler_notas(){
    int i;
    for(i=0; i<N; i++){
        printf("Entre com a nota do aluno: ");
        scanf("%d", &vet[i]);
    }
}

float calcular_media(){
    int i;
    float media = 0, soma = 0;
    for(i = 0; i<N; i++){
        soma+= vet[i] ;
    }
    media = soma/5;
    return media;
}

int main(){
    float media;
    ler_notas();
    printf("A media da turma foi %f ", calcular_media(media));
}