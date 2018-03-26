#include <stdio.h>
int main()
{
    int t, i, n;
    while(scanf("%d",&t) && t)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n%2)
            printf("%d\n",n*2-1);
            else
            printf("%d\n",n*2-2);
        }
    }
    return 0;
}
