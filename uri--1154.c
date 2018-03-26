#include<stdio.h>
int main()
{
    int age,i;
   double avg,sum=0,count=0;
    while(1)
    {
        scanf("%d",&age);
    if(age<0)
        break;
        count++;
        sum=sum+age;
        }
        avg=sum/count;
        printf("%.2lf\n",avg);

}
