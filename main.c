#include <stdio.h>
#include <stdlib.h>
#define MAX_TAMFILA 100


// estruturando as estruturas ( kkkkkkkkk )

/**
 * Pilha
 */

typedef struct
{
    struct elemPilha *baixo;
    // conteudo ( transações )
}elemPilha;

typedef struct
{
    elemPilha *topo;
    int nlem;
} Pilha;



/**
*   Fila
*/
typedef struct
{
    int vetFila[MAX_TAMFILA];
    int inicio;
    int nlem;
} Fila;

/**
*   Vetor Esparso
*/
typedef struct
{
    int nCol;
    struct elemVetEsparso *coluna;

} VetEsparso;

typedef struct
{
    int col;
    struct elemVetEsparso* direita;
    struct elemVeTEsparso* esquerda;
    // conteudo
} elemVetEsparso;


// criando métodos para as estruturas
void criarPilha(Pilha *pilha)
{
    pilha->topo = NULL;
    pilha->nlem = 0;
}

void addElementoPilha (Pilha *pilha, tpconteudo elemento)
{
    elem = (elemPilha*)malloc(sizeof(elemPilha));

    while (pilha->topo != NULL)
    {
        if (elem->conteudo = elemRemover->conteudo)
        {
            pilha->topo = pilha->topo->baixo;
            free(elemRemover);
        }
    }
}



int main(void)
{
    printf("teste");
}

