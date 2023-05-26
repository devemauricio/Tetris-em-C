#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern alt;
extern larg;
extern x;
extern y;
extern tabuleiro[25][18];


void apagar(int linha)
{
    for(x = linha; x > 1; --x)
    {
        for(y = 1; y < 17; ++y)
        {
            tabuleiro[x][y] = tabuleiro[x-1][y];

        }
    }
}

void completarLinha()
{
    int linha, col;
    for(linha = 0; linha < 24; ++linha)
    {
        int contarCorpo = 0;
        for(col = 1; col < 17; ++col)
        {
            if(tabuleiro[linha][col] == 178)
                ++contarCorpo;
            if(contarCorpo == 16)
            {
                apagar(linha);
            }
        }
    }
}

apagarTabuleiro(int valor)
{
    if(alt < 16)
    {
        for(x = 0; x < 21; ++x)
        {
            for(y = 0; y < 21; ++y)
            {
                if(tabuleiro[x][y] == 2)
                    tabuleiro[x][y] = 0;
            }
        }
    }else{
        for(x = 0; x < 21; ++x)
        {
            for(y = 0; y < 21; ++y)
            {
                if(tabuleiro[x][y] == 2)
                    tabuleiro[x][y] = 1;
            }
        }
        valor = 1 + rand()%7;
        alt = -3;
        larg = 11;
        valor = 1 + rand()%7;
        limparPeca();
        escolherPeca(valor);
    }
}
