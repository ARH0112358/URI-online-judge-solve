#include<stdio.h>
int main()
{
    int N,x,y,i,sum;
     scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&x,&y);
        if(x%2==0)
        {
            x++;
        }
        sum=0;
        for(i=0;i<y;i++)
        {
            sum+=x + (i*2);

        }
         printf("%d\n",sum);
    }
}
