#include <stdio.h>
int main()
{
    int n, m , i, c=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        scanf("%d", &m);
        if(m==n)
        c++;
    }
    printf("%d\n", c);
    return 0;
}
