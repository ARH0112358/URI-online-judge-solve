#include<stdio.h>
int main()
{
    int x,z;
    int sum=0,count=0;
    scanf("%d %d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    while(sum<z)
    {
        sum+=x;
        x++;
        count++;
}
    printf("%d\n",count);



}
