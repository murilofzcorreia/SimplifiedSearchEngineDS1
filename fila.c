//
// Created by ronaldo on 12/04/2026.
//

#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_TAMFILA 100
#define MAX_TAM_NOME_ARQ 100


typedef struct
{
    char vetFila[MAX_TAMFILA][MAX_TAM_NOME_ARQ]; // vetor de string com { "arq1.txt, "arq2.txt ... } FIFO
    int inicio; // index do primeiro elemento da fila ( vetor )
    int nlem; // número de elementos na fila
} Fila;

void addArquivoFila(Fila* fila, char nomeArq[MAX_TAM_NOME_ARQ])
{
    if (fila->nelem >= MAX_TAMFILA)
    {
        printf("Fila cheia\n");
    }
    else
    {
        fila->vetFila[fila->inicio++] = nomeArq;
        fila->nlem++;
    }
}

void removeArquivoFila(Fila* fila)
{
    if (fila->elem == 0)
    {
        printf("Fila vazia\n");
    }
    else
    {
        // tem que fzr remanejamento
    }
}
