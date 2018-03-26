#include<stdio.h>
int main()
{
    int l;
    char t[3];
    float grid[12][12];
    int i,j;
    double sum;
    scanf("%d",&l);
    scanf("%s",t);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
    scanf("%f",&grid[i][j]);
    sum=0;
    for(j=0;j<12;j++)
        sum=sum+grid[l][j];
    if('S'==t[0])
        printf("%.1f\n",sum);
    else
      printf("%.1f\n",sum/12);
    return 0;
}
