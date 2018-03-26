#include <stdio.h>
int main()
{
    int n, i, j, c=0;
    while(scanf("%d", &n) != EOF)
    {
        int num = 1;
        c++;
        num += ((n*(n + 1)) / 2);
        if(n == 0)
         printf("Caso %d: %d numero\n", c, num);
        else
         printf("Caso %d: %d numeros\n", c, num);
        printf("0");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}
