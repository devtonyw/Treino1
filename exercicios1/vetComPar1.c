#include <stdio.h>

/*7. Seja uma faculdade com N cursos de graduação. Sejam dois vetores, um para armazenar o número de
vagas de cada curso e outro para armazenar o número de candidatos de cada curso. O vetor de vagas
e o vetor de candidatos são lidos (vagas[i]) representa o número de vagas do curso i e candidatos[i])
representa o número de candidatos inscritos para o curso i). O programa deve calcular o numero de
candidatos por vaga de cada curso e armazenar em um terceiro vetor (conc). Fazer as seguintes
funções:
• fleitura() : Recebe um vetor como parâmetro e lê o vetor ;
• fcalcula_conc( ): recebe três vetores e partir dos dois primeiros (vagas, candidatos) e calcula o
terceiro que contém o número de candidatos por vaga;
• fconsulta(): receber o índice de um curso e retornar o número de candidatos por vaga desse curso;
• fmaiorconc(): recebe o vetor de candidatos por vaga e retornar o índice do curso de maior
concorrência.
*/
#define N 5


void fleitura(int vagas[], int candidatos[]){
    for(int i = 0; i<N; i++){
        printf("O numero de vagas do %d curso e: ", i);
        scanf("%d", &vagas[i]);
        printf("O numero de candidados do %d curso e: ", i);
        scanf("%d", &candidatos[i]);
    }
}

void fcalcula_conc(int vagas[], int candidatos[], float conc[]){
    for(int i = 0; i<N; i++){
        conc[i] = candidatos[i]/vagas[i];
    }
}

int fconsulta(float conc[], int i, int indiceConsulta){
    printf("Digite o indice do curso que voce quer consultar (0 a %d): ", N - 1);
    scanf("%d", &indiceConsulta);
    conc[i] = indiceConsulta;
    return conc[i];
}

int fmaiorconc(float conc[]){
    int maior = 0;
    for(int i = 0; i <N; i++){
        if(conc[i]>maior){
            maior = i; 
        }
        else{
            maior = maior;
        }
    }
    return maior;
}

void main(){
    int vagas[N], candidatos[N], consulta, indiceConsulta = 0 ;
    float conc[N];
    fleitura(vagas, candidatos);
    fcalcula_conc(vagas, candidatos, conc);
    printf("Digite o indice do curso que voce quer consultar (0 a %d): ", N - 1);
    scanf("%d", &indiceConsulta);
    // erro printf("A concorrencia do curso %d e: ", indiceConsulta, fconsulta(conc, indiceConsulta));
    printf("\nO indice do curso com maior concorrencia e : %d", fmaiorconc(conc));

}