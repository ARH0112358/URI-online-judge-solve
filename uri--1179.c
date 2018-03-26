#include<stdio.h>
int main()
{
    int n,i,j;
    int par[5],impar[5];
    int index1,index2;
    index1=index2=0;
    for(i=1;i<=15;i++){
     scanf("%d",&n);
     if(n%2==0)
        par[index1++]=n;
     else
     impar[index2++]=n;
     if(index1==5)
     {
         for(j=0;j<5;j++)

             printf("par[%d] = %d\n",j,par[j]);
             index1=0;

     }
      if(index2==5)
     {
         for(j=0;j<5;j++)

             printf("impar[%d] = %d\n",j,impar[j]);
             index2=0;

     }

}
        for(j=0;j<index2;j++)
            printf("impar[%d] = %d\n",j,impar[j]);
        for(j=0;j<index1;j++)
            printf("par[%d] = %d\n",j,par[j]);

  return 0;

}
