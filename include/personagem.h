typedef struct {

    char nome[50];
    int vida;
    int defesa;
    int ataque;
} Ficha;

void atacar (Ficha*atacante, Ficha*alvo);

void mostrarStatus (Ficha*personagem);