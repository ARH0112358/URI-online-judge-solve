#include<stdio.h>
int main()
{
    int n;
    int i,j,min;
    while(1==scanf("%d",&n))
    {
        if(0==n)
         break;


        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                min=i;
                if(j<min)
                    min=j;
                if(n-i+1<min)
                    min=n-i+1;
                    if(n-j+1<min)
                        min=n-j+1;
                    printf("%3d",min);
                    if(j<n)
                      printf(" ");
                    else
                        printf("\n");

            }

        }
      printf("\n");

    }
}
