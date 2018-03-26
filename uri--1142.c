#include<stdio.h>
int main()
{
    int a,b=1;
    scanf("%d",&a);
    while(a--)
    {
        printf("%d ",b++);
        printf("%d ",b++);
        printf("%d ",b++);
        b++;
        printf("PUM\n");
    }
}
