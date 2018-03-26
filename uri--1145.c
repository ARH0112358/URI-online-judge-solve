#include<stdio.h>
int main()
{

    int X,Y,b=1;
    int i;
    scanf("%d %d",&X,&Y);
    for(i=1;i<=Y;i++)
    {
        if(X==b){
           printf("%d\n" , i);
           b=1;
        }
        else
        {
            printf("%d" " ",i);
            b++;
        }
    }

}
