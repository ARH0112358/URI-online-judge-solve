#include<stdio.h>
int main()
{
    int a,b,c;
    double area;
    int size;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        scanf("%d %d",&b, &c);
        area=a*b*100/c;
        for(size=1;size*size<=area;size++);
        size--;
        printf("%d\n",size);
    }
}
