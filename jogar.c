#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern peca[4][4], tabuleiro[25][18], CORPO, x, y, valor, alt, larg;
int tempo  = 500;

int theEnd()
{
    for(x = 1; x < 17; ++x)
    {
        if(tabuleiro[3][x] == 178)
        {
            return 1;
        }
    }
}

int movDireita()
{
    for(x = 0; x < 4; ++x)
    {
        for(y = 0; y < 4; ++y)
        {
            if((peca[x][y] == CORPO && tabuleiro[alt+x][larg+y+1] == 219) ||
                    (peca[x][y] == CORPO && tabuleiro[alt+x][larg+y+1] == 178))
            {
                return 1;
            }
        }
    }
}
int movEsquerda()
{
    for(x = 0; x < 4; ++x)
    {
        for(y = 0; y < 4; ++y)
        {
            if((peca[x][y] == CORPO && tabuleiro[alt+x][larg+y-1] == 219)||
                    (peca[x][y] == CORPO && tabuleiro[alt+x][larg+y-1] == 178))
            {
                return 1;
            }
        }
    }
}
void checarColisao()
{
    if(colisao() == 1)
    {
        alt = -1;
        larg = 5;
        valor = 1 + rand()%7;
        limparPeca();
        escolherPeca();
    }

}

void jogar()
{
    while(1)
    {
        while(!kbhit())
        {
            if(theEnd() == 1)
            {
                system("cls");
                printf("GAME OVER");
                break;
            }
            completarLinha();
            Sleep(tempo);
            checarColisao();
            mostrarPecaETabuleiro();
            ++alt;
            tempo = 500;
        }
        char mov = getch();

        switch(mov)
        {
        case 'p':
            getch();
            break;
        case 'd':
            //apagarRastro(mov);
            if(movDireita()!=1)
            {
                ++larg;
            }

            break;
        case 'a':
            //apagarRastro(mov);
            if(movEsquerda()!=1)
            {
                --larg;
            }
            break;
        case 's':
            tempo = 50;
            break;
        case 'w':
            rotacionar();
        }
    }
}
