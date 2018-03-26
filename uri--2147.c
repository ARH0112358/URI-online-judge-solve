#include <stdio.h>

int main()
{
    int t, l;
    char name[10100];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", name);
        l = strlen(name);
        printf("%.2lf\n", l*.01);
    }
    return 0;
}
