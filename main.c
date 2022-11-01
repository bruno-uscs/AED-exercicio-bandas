/******************************************************************************

Bruno Domingos Caneo

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAMANHO 3   

typedef struct banda {
    char nome[20];
    char estilo[15];
    int tamanho;
    int rank;
} BANDA;


void leBanda (BANDA *v) {
    
  for(int i=0;i<TAMANHO;i++) {
    printf("\nNome da banda: ");   scanf("%s", v[i].nome);
    printf("Estilo musical: ");    scanf("%s", v[i].estilo);
    printf("Qt de integrantes: ") ;scanf("%d",&v[i].tamanho);
    printf("Posicao no ranking: ");scanf("%d",&v[i].rank);
  }
}

void exibeBanda (BANDA *exib) {
    
    for( int i=0;i <TAMANHO ; i++) {
        printf("\n\nBanda: %s",exib[i].nome);
        printf("\nEstilo: %s",exib[i].estilo);
        printf("\nIntegrantes: %d",exib[i].tamanho);
        printf("\nPosicao: %d",exib[i].rank);
    }
}

void procuraBanda (BANDA *busca) {
    char aux[50];
    int achou=0;

    printf("\nInforme seu tipo de musica: ");
    scanf ("%s", aux);

    for(int i=0;i<TAMANHO;i++)    {
        if(strcmp(busca[i].estilo,aux)==0){
          achou=1;
          printf("\nBanda: %s",busca[i].nome);
        }
    }
    if(achou)  printf("\nBanda Encontrada !");
    else       printf("\nBanda Ausente !");
}

int main() {
    BANDA v[TAMANHO];     //VETOR do tipo banda.
    char musica[15];

    leBanda (v);
    procuraBanda (v);
    printf ("\n\nLISTAGEM DE TODAS AS BANDAS");
    exibeBanda (v);
    return 0;
}
