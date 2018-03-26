#include <stdio.h>

int main()
{
    int N, M, net, i, c;
    int bill[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    while(1)
    {
        scanf("%d%d", &N, &M);
        if(N==0 && M==0)
            break;
        net = M - N;
        for(i=0, c = 0; i<15; i++)
        {
            if(bill[i] == net)
            {
                c = 1;
                break;
            }
        }
        if(c)
        printf("possible\n");
        else
        printf("impossible\n");
    }
    return 0;
}
