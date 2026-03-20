#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string.h>

typedef struct {

    char nome[50];
    int vida;
    int defesa;
    int ataque;
} Ficha;

void mostrarStatus (Ficha*personagem);

#endif