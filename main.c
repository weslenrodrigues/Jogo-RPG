#include <stdio.h>

typedef struct {

    char nome[50];
    int vida;
    int defesa;
    int ataque;
} Ficha;

void inicio () {

    printf ("==============================\n");
    printf ("Bem vindo ao jogo generico de RPG\n");
    printf ("==============================");
}

void opcoes (Ficha *player, Ficha *inimigo) {

    int menu;

    printf ("1 - Atacar\n");
    printf ("2 - Ver status\n");
    scanf ("%d", &menu);

    switch (menu)
    {
    case 1:
        atacar (*player, *inimigo);
        printf ("\nVoce atacou!\n");
        break;
    
    case 2:
        mostrarStatus (*player);
        break;

    default:
        printf ("Erro, esta escolha nao existe");
        break;
    }
}

void mostrarStatus (Ficha personagem) {

    printf ("=========== Status ===========\n");
    printf ("Nome: %s\n", personagem.nome);
    printf ("Vida: %d\n", personagem.vida);
    printf ("Defesa: %d\n", personagem.defesa);
    printf ("Ataque: %d\n", personagem.ataque);
    printf ("==============================");
}

void atacar (Ficha *atacante, Ficha *alvo) {

    (*alvo).vida -= (*atacante).ataque; //eu pego a vida do alvo por meio do ponteiro, e diminuo pelo ataque do atacante
}


int main (void) {

    Ficha player = {"Luminite", 50, 10, 20};
    Ficha Inimigo = {"Goblin", 80, 5, 10};


    inicio ();

    while (player.vida > 0 && inimigo > 0) // botar o jogo em loop, para acabar apenas quando ele zerarem a vida
}