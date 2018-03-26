#include<stdio.h>
int main()
{
    int x,sum,i;
    while(1==scanf("%d",&x))
    {


        if(0==x)
        break;
       if(x%2)
           x++;
        sum=0;
       for(i=0;i<5;i++)
       {
           sum+=x+(i*2);


       }
        printf("%d\n",sum);
         }

}
