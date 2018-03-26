#include<stdio.h>
int main()
{
    int N;
    int X,Y;
    int i,sum;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&X, &Y);
        sum=0;
        if(X<Y)
        {
            for(i=X+1;i<Y;i++)
            {
                if(i%2==1)

                {
                    sum=sum+i;
                }
            }
        }
        else
        {
            for(i=Y+1;i<X;i++)
            {
                if(i%2==1)
                {
                    sum=sum+i;
                }
            }
        }
        printf("%d\n",sum);
    }
}
