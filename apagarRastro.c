#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern larg;
extern alt;
extern tabuleiro[25][18];

apagarRastro(char mov)
{
    int a;
    if(mov == 'a')
    {
        for(a = 0; a < 6; ++a)
        {
            tabuleiro[alt + a][larg + 3] = 0;
        }
    }
    if(mov == 'd')
    {
        for(a = 0; a < 6; ++a)
        {
            tabuleiro[alt + a][larg] = 0;
        }
    }
}
