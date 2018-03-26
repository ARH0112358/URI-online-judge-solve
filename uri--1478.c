#include<stdio.h>
int main()
{
    int n;
    int i,j,min;
    while(1==scanf("%d",&n))
    {
        if(0==n)
         break;


        for(i=1;i<=n;i++){
             printf("%3d",i);

            for(j=i-1;j>=1;j--)
                 printf(" %3d",j);

                for(j=2;j<=n-i+1;j++)
                   printf(" %3d",j);

                    printf("\n");
        }
            printf("\n");
    }
}
