#include<stdio.h>
int main()
{

    int A,N,i,sum;
    scanf("%d %d",&A,&N);
    while(N<=0)
    {
        scanf("%d",&N);

    }
    sum=0;
    for(i=0;i<N;i++)
    {
        sum=sum+(A+i);
    }
    printf("%d\n",sum);
}
