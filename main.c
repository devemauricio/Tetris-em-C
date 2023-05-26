#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "apagarRastro.h"
#include "apagarTabuleiro.h"
#include "rotacionarD.h"
#include "rotacionarE.h"
#include "escolherPeca.h"
#include "limparPeca.h"
#include "desenharPeca.h"
#include "jogar.h"


int alt;
int larg = 5;
int tabuleiro[25][18] = {0};
int peca[4][4] = {0};
int CORPO = 2;
int x, y, i, j;
int valor;




inicio()
{
    alt = 0;
    srand ( time(NULL) );
    valor  = 1 + rand()%7;
    escolherPeca();
    jogar();
}
main()
{
    inicio();
}

