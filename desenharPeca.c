#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern x;
extern y;
extern peca[4][4];
extern alt;
extern larg;
extern tabuleiro[25][18];
extern i;
extern j;
extern CORPO;

void imprimirNoTabuleiro()
{
    for( i = 0; i < 4; ++i)
    {
        for(j = 0; j < 4; ++j)
        {
            if(peca[i][j] == CORPO)
            {
                tabuleiro[alt+i-1][larg + j] = 178;
            }
        }
    }
}

int colisao()
{
    for(x = 0; x < 4; ++x)
    {
        for(y = 0; y < 4; ++y)
        {
            if(peca[x][y] == CORPO && tabuleiro[alt+x][larg+y] == 178)
            {
                imprimirNoTabuleiro();
                return 1;
            }
        }
    }
}

desenharTabuleiro()
{
    int x, y;
    for(x = 0; x < 25; ++x)
    {
        for(y = 0; y < 18; ++y)
        {
            if(x == 0 || x == 24 || y == 0 || y == 17)
            {
                tabuleiro[x][y] = 3;
                printf("%c", 219);
            }
        }
        putchar('\n');
    }

}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
mostrarPecaETabuleiro()
{
    system("cls");
    for(x = 0; x < 25; ++x)
    {
        for(y = 0; y < 18; ++y)
        {
            if(x == 24)
                tabuleiro[x][y] = 178;
            else if (y == 0 || y == 17)
                tabuleiro[x][y] = 219;
            printf("%c", tabuleiro[x][y]);
        }
        putchar('\n');
    }

    int var = alt;

    for(x = 0; x < 4; ++x)
    {
        for(y = 0; y < 4; ++y)
        {
            if(peca[x][y] == CORPO)
            {
                gotoxy(larg+y, var+x);
                printf("%c", 219);

            }
        }
        gotoxy(larg+y, var+x+1);
    }
}
