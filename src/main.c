#include <stdio.h>
#include "personagem.h"
#include "inicio.h"
#include "batalha.h"
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main (void) {

    Ficha player = {"Luminite", 100, 0, 25};
    Ficha inimigo = {"Goblin", 100, 0, 10};

    system ("cls");
    inicio(); // titulo
    Sleep (2000); //2 segundos pausado
    system ("cls");

    mostrarStatus(&player);
    Sleep (2000);
    system ("cls");

    //rodar o jogo enquanto os dois estiver com a vida maior que 0
    while (player.vida > 0 && inimigo.vida > 0) {

        // turno do player
        if (turnoPlayer(&player, &inimigo) == 1) {
            Sleep (1000);
            printf ("O Goblin finalmente teve o fim que merecia!");
            Sleep (2500);
            break;  // Inimigo morreu
        }

        Sleep (1000);

        // turno do inimigo
        if (turnoInimigo(&inimigo, &player) == 1) {
            Sleep (1000);
            printf ("Voce olha para baixo e ve a faca enfiada no seu estomago.");
            Sleep (2000);
            break;  // player morreu
        }

        Sleep (2500);
        system ("cls");
    }

    system ("cls");

    printf ("==============================\n");
    printf ("======= FIM DA BATALHA =======\n");
    printf ("==============================\n\n");

    Sleep (2000);
    system ("cls");

    mostrarStatus(&player);
    Sleep (2500);
    system ("cls");
    mostrarStatus(&inimigo);
    
    Sleep (1500);
    system ("cls");

    printf ("==============================\n");

    if (player.vida > 0) {

        printf ("%s foi o vencedor da vez!!\n", player.nome);
        printf ("==============================");
    }

    if (inimigo.vida > 0) {

        printf ("%s foi derrotado e ninguem contara sobre suas batalhas.\n", player.nome);
        printf ("==============================");
    }

    Sleep (3000);
    system ("cls");

    return 0;
}