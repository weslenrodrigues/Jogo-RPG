#include <stdio.h>
#include "personagem.h"

void mostrarStatus (Ficha *personagem) {

    printf ("=========== Status ===========\n");
    printf ("Nome: %s\n", personagem->nome);
    printf ("Vida: %d\n", personagem->vida);
    printf ("Defesa: %d\n", personagem->defesa);
    printf ("Ataque: %d\n", personagem->ataque);
    printf ("==============================\n");
}