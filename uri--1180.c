#include<stdio.h>
int main()
{
    int n,x[1000],i,pos,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    min=x[0];
    pos=0;
    for(i=1;i<n;i++){
        if(x[i]<min)
    {
        min=x[i];
        pos=i;
    }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}
