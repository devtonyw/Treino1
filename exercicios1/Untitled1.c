#include <stdio.h>

/*1. Seja uma faculdade com N cursos de gradua��o. Seja um vetor de estruturas onde cada elemento do
vetor cont�m dados de cada curso. Para cada curso , existem as seguintes informa��es (campos):
� n�mero de vagas;
� n�mero de candidatos;
� concorr�ncia

Os campos vagas e candidatos s�o lidos. O programa deve calcular o numero de candidatos por vaga de
cada curso e armazenar no campo concorr�ncia. O programa deve definir a estrutura struct TCurso e deve
declarar o vetor vet, desse tipo. As seguintes fun��es devem ser feitas:
� fleitura() : Recebe o vetor como par�metro e l� os campos das vagas e de candidatos;
� fcalcula_conc( ): recebe o vetor como par�metro e a partir dos dois primeiros campos (vagas,
candidatos) calcula o terceiro campo que cont�m o n�mero de candidatos por vaga;
� ftotalinscritos(): recebe o vetor como par�metro e retornar o total de inscritos no vestibular da
faculdade;
� ftotalvagas(): recebe o vetor como par�metro e retornar o total de vagas da faculdade;
� fconsulta(): receber o �ndice de um curso (posi��o no vetor) e o vetor como par�metro e retornar
o n�mero de candidatos por vaga desse curso;
� fmaiorconc(): recebe o vetor como par�metro e retornar o �ndice do curso de maior
concorr�ncia;
� main(): declara o vetor vet e faz chamada �s outras fun��es.*/
#define N 5

struct Tcurso {
	int numero_vagas;
	int numero_candidatos;
	float concorrencia;
};

void fleitura(struct Tcurso vet[]){
	for(int i = 0; i<N; i++){
		printf("Entre com o numero de vagas do curso: ");
		scanf("%d", &vet[i].numero_vagas);
		printf("Entre com o numero de candidatos: ");
		scanf("%d", &vet[i].numero_candidatos);
	}
}

void fcalcula_conc(struct Tcurso vet[]){
	for(int i = 0; i<N; i++){
		vet[i].concorrencia = vet[i].numero_candidatos/vet[i].numero_vagas;
	}
}

int totalinscritos(struct Tcurso vet[]){
	int total;
	for(int i = 0; i<N; i++){
		total += vet[i].numero_candidatos;
	}
	return total;
}

int ftotalvagas(struct Tcurso vet[]){
	int total;
	for(int i = 0; i<N; i++){
		total += vet[i].numero_vagas;
	}
	return total;
}

int fconsulta(struct Tcurso vet[], int i){
	return vet[i].concorrencia;
}

float fmaiorconc(struct Tcurso vet[]){
	float maior = 0;
	int indicemaior;
	for(int i = 0; i<N; i++){
		if(vet[i].concorrencia>maior){
			maior = vet[i].concorrencia;
			indicemaior = i;
		}
	}
	return indicemaior;
}

void main(){
	struct Tcurso vet[N];
	int i, total_inscrito, total_vaga, consulta, maiorcons;
	float calculo;
	fleitura(vet);
	fcalcula_conc(vet);
	printf("\nO numero total de inscritos e %d", totalinscritos(vet));
	printf("\nO numero total de vagas e %d", ftotalvagas(vet));
	printf("\nO numero e candidatos por vaga e %d", fconsulta(vet, i));
	printf("\nO curso de maior concorrencia e %d", fmaiorconc(vet));
	
	
	
	

}
