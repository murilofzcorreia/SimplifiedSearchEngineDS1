//
// Created by User on 13/04/2026.
//

#include "arquivosTxt.h"
#include <stdio.h>
#include <stdlib.h>

void transformaMinuscula (char palavra[]) {
    for (int i=0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] += 32;
        }
    }
}

void removeAcentuacao (char palavra[]) {

    // entender como funciona utf-8
    // um char especial usa 2 bytes
}


/**
 * vamos pegar e abrir um arq texto e dps reconhecer oq é palavra
 * depois aramazenar cada palavra em um vetor esparso (lista ligada encadeada dinamica)
 * ainda, pensar em uma função hash ideal para retornar o ID de cada palavra
 * cada nó na lista possui esse ID e a frequencia dessa palavra no arquivo txt
 * logo após isso e mais um monte de coisas, a busca deve retornar o arquivo com mais similiridade a busca,
 *  com base na qtd de frequencia desse ID
 *
 *
 */


// abertura de arquivos
FILE *file;
file = fopen("arq1.txt", "r");

// leitura de arquivos palavra por palavra ( fscanf ), ele lê
// %s | char[] | Reads a string until the next whitespace (space, tab, or newline).

char palavraAtual[100];

    // a cada "rodada" do loop ele coloca uma palavra em palavraAtual, porém
    //   podem ter ainda coisas como ',' '.' '?', já q ele
    //   só para com espaço, tab ou uma nova linha ('\n')

    while (fscanf(file, "%99s", palavraAtual) == 1) {
        // aqui eu pego cada plavra, portnato preciso fazer a tokeniszação das mesmas
        // logo eu preciso usar a função hash para retornar o ID e dps jogar no vetor esparso
        //  desse arquivo em especifico
        for (int i=0; palavraAtual[i] != '\0' ;i++ ) {

            // tratamento dos caracteres da palavra

            if (palavraAtual[i] >= 'a' && <= 'z') {

            }

        }
        hash(palavraAtual) // algo assim tem que ser feito, retornando o ID

        // oi,poi,koi
        // "oipoikoi" ( 1 str ( palavra ) )
        // oi poi koi ( +de 1 str ( palavras ) )

        // Oi, tudo bem? Eu sou o Murilo!
        // { "oi", "tudo", "bem", "eu", "sou", "o", "murilo" }

    }
