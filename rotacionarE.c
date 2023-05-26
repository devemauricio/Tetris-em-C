#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

extern peca[6][6];

rotacionarE()
{
    int container[6][6] = {0};
    int a, b;
    for(a=0; a<6; ++a)
    {
        for(b=0; b<6; ++b)
        {
            container[a][b] = peca[a][b];
        }
    }
    limparPeca();
    int x1, y1;
    for(x1=0; x1<6; ++x1)
    {
        for(y1=0; y1<6; ++y1)
        {
            peca[x1][y1] = container[y1][5-x1];

        }
    }
}
