cmake_minimum_required(VERSION 4.2)
project(SimplifiedSearchEngineDS1 C)

set(CMAKE_C_STANDARD 11)

add_executable(SimplifiedSearchEngineDS1 main.c
        pilha.c
        pilha.h
        fila.c
        fila.h
        hash.c
        hash.h
        listaEsparsa.c
        listaEsparsa.h
        abb.c
        abb.h
        dicionario.c
        dicionario.h
        testesMurilo.c
        arquivosTxt.c
        arquivosTxt.h
        arquivosTxt.h)
