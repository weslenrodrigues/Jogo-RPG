#include <stdio.h>
#include "personagem.h"
#include "batalha.h"

void atacar (Ficha *atacante, Ficha *alvo) {

    if (alvo->defesa < atacante->ataque) {

        alvo->vida -= atacante->ataque - alvo->defesa;
        printf ("\nO ataque acertou e deu %d de dano\n\n", atacante->ataque);
    } else {
        printf ("\nO ataque errou!\n\n");
    }
}