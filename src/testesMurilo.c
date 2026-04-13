//
// Created by ronaldo on 12/04/2026.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char vetFila[MAX_TAMFILA][MAX_TAM_NOME_ARQ]; // vetor de string com { "arq1.txt, "arq2.txt ... } FIFO
    int inicio; // index do primeiro elemento da fila ( vetor )
    int nlem; // número de elementos na fila

} Fila;

int main (void)
{

    Fila fila;

    fila->vetFila[fila->inicio++] = nomeArq;

    printf("Testes do Murilo\n");
    printf("Iniciando Fila\n");

}