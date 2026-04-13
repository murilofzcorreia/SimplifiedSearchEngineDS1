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






FILE *file;
file = fopen("arq1.txt", "r");
