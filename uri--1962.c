#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int year, d;
        scanf("%d", &d);
        if(d<2015)
        {
            year = 2015 - d;
            printf("%d D.C.\n", year);
        }
        else
        {
            year = d - 2014;
            printf("%d A.C.\n", year);
        }
    }
    return 0;
}
