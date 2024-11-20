#include <stdio.h>

/*2. Definir uma estrutura TAluno para armazenar os seguintes dados de um aluno:
• Matricula (inteiro);
• Sexo (caracter);
• Idade (inteiro);
• Media Global (real).
O programa deve armazenar os dados de uma sala com 5 alunos em um vetor e deve executar as seguintes
tarefas:
• Ler os dados dos alunos;
2
• Imprimir a matricula do aluno com maior média global;
• Imprimir a média da idade feminina;
• Imprimir a média da sala;
• Imprimir a porcentagem de alunos acima da media da sala.
Todos os cálculos devem ser feitos por funções com passagem de parâmetros. A função principal é
responsável por imprimir os valores calculados e retornados pelas funções. */

#define N 2

struct Taluno{
	int matricula;
	char sexo[20];
	int idade;
	float mediaglob;
};

void ler_dados(struct Taluno vet[]){
	for(int i; i<N; i++){
		printf("Entre com a matricula do aluno: ");
		scanf("%d", &vet[i].matricula);
		printf("Entre com o sexo do aluno F para feminino e M para masculino: ");
		scanf("%s", &vet[i].sexo);
		printf("Entre com a idade do aluno: ");
		scanf("%d", &vet[i].idade);
		printf("Entre com a media global do aluno: ");
		scanf("%f", &vet[i].mediaglob);
	}
}

int maiormedia(struct Taluno vet[]){
	int maior = 0, matricula;
	for(int i; i<N; i++){
		if(vet[i].mediaglob>maior){
			maior = vet[i].mediaglob;
			matricula = vet[i].matricula;
		}
	}
	return matricula; 
}

float mediaidade_feminina(struct Taluno vet[]){
	int idadex = 0, z = 0;
	float media;
	for(int i = 0; i<N; i++){
		if(vet[i].sexo == "F"){
			idadex += vet[i].idade;
			z += 1;
		}
	}
	media = idadex / z ;
	return media;
}

float media_sala(struct Taluno vet[]){
	float mediax, calculo = 0, calculo1 = 0;
	for(int i; i<N; i++){
		mediax += vet[i].mediaglob;
		calculo += 1 ;
	}
	calculo1 = mediax / calculo ; 
	return calculo1 ;
}

void acima_media(){
	
}

void main(){
	struct Taluno vet[N];
	ler_dados(vet);
	printf("\nA matricula com do aluno com maior media global e: %d ", maiormedia(vet));
	printf("\nA media da idade feminina e %f", mediaidade_feminina(vet));
	printf("\nA media da sala e %f", media_sala(vet));
}
