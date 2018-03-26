#include<stdio.h>
#define MAX_n 61
int main()
{
    int t;
    int n;
    int i;
   unsigned long long fib[MAX_n];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        fib[0]=0;
        fib[1]=1;
        for(i=2;i<=n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];


    }
    printf("Fib(%d) = %llu\n",n,fib[n]);
}
}
