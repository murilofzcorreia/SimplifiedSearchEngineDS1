#include <stdio.h>
#include <stdlib.h>

// estruturando as estruturas ( kkkkkkkkk )

/**
 * Pilha
 */

typedef struct
{
    struct elemPilha *prox;
    int conteudo;
}elemPilha;

typedef struct
{
    elemPilha *topo;
    int nlem;
} Pilha;




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
    struct elemVetEsparso* esquerda;
    int conteudo;  // Added content field
} elemVetEsparso;


// criando métodos para as estruturas
void criarPilha(Pilha *pilha)
{
    pilha->topo = NULL;
    pilha->nlem = 0;
}

bool pilhaVazia(Pilha *pilha)
{
    return pilha->nlem == 0;
}

void addElementoPilha (Pilha *pilha, int elemento)
{
    elemPilha *novoElem = (elemPilha*)malloc(sizeof(elemPilha));
    if (novoElem == NULL)
    {
        printf("Erro ao alocar memória para o elemento da pilha.\n");
        return;
    }
    novoElem->conteudo = elemento;
    novoElem->prox = pilha->topo;
    pilha->topo = novoElem;
    pilha->nlem++;
}

int removerElementoPilha(Pilha *pilha, int elemento)
{
    if (pilhaVazia(pilha))
    {
        printf("Pilha vazia! Não é possível remover elementos.\n");
        return -1;
    }

    while (pilha->topo != NULL)
    {
        if (pilha)
    }

}


int main(void)
{
    FILE *file;

    file = fopen("dados.txt", "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
    }





    Pilha minhaPilha;
    criarPilha(&minhaPilha);

    addElementoPilha(&minhaPilha, 10);
    addElementoPilha(&minhaPilha, 20);
    addElementoPilha(&minhaPilha, 30);

    printf("Elementos removidos: %d, %d, %d\n", removerElementoPilha(&minhaPilha), removerElementoPilha(&minhaPilha), removerElementoPilha(&minhaPilha));

    return 0;
}
