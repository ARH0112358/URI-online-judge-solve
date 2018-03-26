#include <stdio.h>
int main()
{
    int t;
    double price;
    double amount = 0.00;
    int c, q;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &c, &q);
        if(c==1001)
            amount += (double) q*1.50;
        else if(c==1002)
                amount += (double) q*2.50;
        else if(c==1003)
                amount += (double) q*3.50;
        else if(c==1004)
                amount += (double) q*4.50;
        else if(c==1005)
                amount += (double) q*5.50;
    }
    printf("%.2lf\n", amount);
    return 0;
}
