//
// Created by ronaldo on 12/04/2026.
//

#include "listaEsparsa.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int ID;
    int frequencia;
    struct statisticsPalavra *prox;

}statisticsPalavra;

typedef struct {
    statisticsPalavra *listaPalavras;
    int nPalavras;

}listaEsparsaPalavrasArq;

void addElemEsparso (listaEsparsaPalavrasArq *listaArq, ) {

}