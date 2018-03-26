#include<stdio.h>
int main()
{
    int N;
    long i,sum,x;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%ld",&x);
        sum=0;
        for(i=1;i<x;i++)
        {
            if(x%i==0)
            {
               sum+=i;
            }
        }

        if(sum == x){
            printf("%ld eh perfeito\n",x);
        }
        else
        {
            printf("%ld nao eh perfeito\n",x);
        }
    }
    }



