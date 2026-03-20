#include <stdio.h>
#include "personagem.h"
#include "inicio.h"
#include "batalha.h"
#include <string.h>

int main (void) {

    Ficha player = {"Luminite", 50, 10, 20};
    Ficha inimigo = {"Goblin", 80, 10, 9};

    inicio();
    mostrarStatus(&player);


    //Rodar o jogo enquanto os dois estiver com a vida maior que 0
    while (player.vida > 0 && inimigo.vida > 0) {

        printf ("=========== Turno de %s ===========\n", player.nome);
        atacar (&player, &inimigo);

        if (inimigo.vida <= 0) {
            break;
        }

        printf ("=========== Turno do Inimigo ===========\n");
        atacar (&inimigo, &player);

        if (player.vida <= 0) {
            break;
        }

    }

    printf ("-----------------------------------------\n");

    if (player.vida > 0) {

        printf ("%s foi o vencedor da vez!!", player.nome);
    }

    if (inimigo.vida > 0) {

        printf ("%s foi derrotado e ninguem contara sobre suas batalhas", player.nome);
    }

    return 0;
}