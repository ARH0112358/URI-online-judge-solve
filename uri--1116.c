#include<stdio.h>
int main()
{
    int N;
    int x,y;
    float result;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&x, &y);
        if(0 == y)
        {
            printf("divisao impossivel\n");
        }
        else{
            result=(float) x/y;
            printf("%.1f\n",result);
        }

    }
}
