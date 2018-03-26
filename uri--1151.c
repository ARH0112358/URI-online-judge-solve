#include<stdio.h>
int main()
{
    int N,i,fibonacci[50];
    scanf("%d",&N);
    fibonacci[0]=0;
    fibonacci[1]=1;
    for(i=2;i<N;i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];

    }
    for(i=0;i<N;i++)
    {
        if(i<N-1)
        {
            printf("%d ",fibonacci[i]);
        }
        else
        {
            printf("%d\n",fibonacci[i]);
        }
    }

}
