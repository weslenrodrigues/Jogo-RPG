#include <stdio.h>
#include "personagem.h"
#include "inicio.h"

int main (void) {

    Ficha player = {"Luminite", 50, 10, 20};
    Ficha Inimigo = {"Goblin", 80, 5, 10};

    inicio();
    mostrarStatus(&player);

    return 0;
}