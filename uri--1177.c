#include<stdio.h>
int main()
{
  int t;
  int n[1000];
  int i;
  scanf("%d",&t);
  for(i=0;i<1000;i++)
  {
      n[i]=i%t;

  }
  for(i=0;i<1000;i++)
  {
      printf("N[%d] = %d\n",i,n[i]);
  }

   return 0;
  }
