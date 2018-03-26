#include<stdio.h>
int main()
{
    int t;
    long pa,pb;
    double g1,g2;
    int year;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld %ld",&pa,&pb);
        scanf("%lf %lf",&g1,&g2);
        for(year=1;year<=100;year++)
        {
            pa+=(long)(pa*g1/100);
             pb+=(long)(pb*g2/100);
             if(pa>pb)
                break;
        }
        if(year>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",year);
    }
    return 0;
}
