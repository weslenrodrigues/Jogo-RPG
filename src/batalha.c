#include <stdio.h>
#include <stdlib.h>
#include "personagem.h"
#include "batalha.h"

void atacar (Ficha *atacante, Ficha *alvo) {

    if (alvo->defesa < atacante->ataque) {

        alvo->vida -= atacante->ataque - alvo->defesa;
        printf ("\nO ataque acertou e deu %d de dano\n\n", atacante->ataque - alvo->defesa);
    } else {
        printf ("\nO ataque errou!\n\n");
    }
    
}

int turnoPlayer (Ficha *player, Ficha *inimigo) {

    printf ("=========== Turno de %s ===========\n", player->nome);
    atacar (player, inimigo);

    if (inimigo->vida <= 0) {
        return 1;  // Inimigo morreu
    }
    return 0;  // Inimigo ainda está vivo
    system ("pause");
}

int turnoInimigo (Ficha *inimigo, Ficha *player) {

    printf ("=========== Turno do Inimigo ===========\n");
    atacar (inimigo, player);

    if (player->vida <= 0) {
        return 1;  // Player morreu
    }
    return 0;  // Player ainda está vivo
}