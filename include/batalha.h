#ifndef BATALHA_H
#define BATALHA_H

#include <stdio.h>
#include "personagem.h"

void atacar (Ficha *atacante, Ficha *alvo);
int turnoPlayer (Ficha *player, Ficha *inimigo);
int turnoInimigo (Ficha *inimigo, Ficha *player);

#endif
