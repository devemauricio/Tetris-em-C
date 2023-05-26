#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern peca[4][4];
extern CORPO;
extern valor;

escolherPeca()
{
    switch(valor)
    {
    case 1:
        peca[2][2] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
        peca[3][3] = CORPO;
        break;
    case 2:
        peca[2][1] = CORPO;
        peca[2][2] = CORPO;
        peca[3][2] = CORPO;
        peca[3][3] = CORPO;
        break;
    case 3:
        peca[2][1] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
        peca[3][3] = CORPO;
        break;
    case 4:
        peca[2][2] = CORPO;
        peca[2][3] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
        break;
    case 5:
        peca[3][0] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
        peca[3][3] = CORPO;
        break;
    case 6:
        peca[2][3] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
        peca[3][3] = CORPO;
        break;
    case 7:
        peca[2][1] = CORPO;
        peca[2][2] = CORPO;
        peca[3][1] = CORPO;
        peca[3][2] = CORPO;
    }
}
