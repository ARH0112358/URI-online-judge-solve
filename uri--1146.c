#include<stdio.h>
int main()
{

    int N;
    int i;

    while(1 == scanf("%d", &N))
    {
        if(0 == N)
            break;

      for(i=1;i<=N;i++)
            {
                printf(" %d", i);

            }
         printf(" ");


    }
}




