#include<stdio.h>
int main()
{
    double a=1;
    int b=2,i;
    for(i=3;i<=39;i++)
    {
        a+=(double)i/b;
        i++;
        b*=2;
    }
    printf("%.2lf",a);
}
