#include<stdio.h>
int main()
{
    double s=1.0;
    int i;

    for(i=2;i<=100;i++)
    {
     s+=1.0/(double)i;

    }
    printf("%.2lf\n",s);
}
