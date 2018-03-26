#include<stdio.h>
int main()
{
    float score,sum=0;
    int count=0;
    while(count<2)
    {
        scanf("%f",&score);
        if(score<0.0)
        {
            printf("nota invalida\n");
        }
        else if(score>10.0)
        {
            printf("nota invalida\n");
        }
        else
        {
            count++;
            sum+=score;

        }
    }
    printf("media = %.2f\n",sum/2);
}
