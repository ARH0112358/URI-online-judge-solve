
#include <stdio.h>
int main()
{
    int p, q, c=0, i, d;
    scanf("%d%d", &p, &q);
    int jump[q];
    for(i=0; i<q; i++)
        scanf("%d",  &jump[i]);
    for(i=1; i<q; i++)
    {
        if(jump[i]>jump[i-1])
         d = (jump[i] - jump[i-1]);
        else
         d = (jump[i-1] - jump[i]);
        if(d<=p)
            c++;
    }
    if(c== q-1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
