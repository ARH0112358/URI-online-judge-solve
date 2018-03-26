#include<stdio.h>
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    int d;
    int d3,h3,m3,s3;
    scanf("%*s %d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%*s %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    d=d2-d1;
    d=d*24;
    d=d+(h2-h1);
    d=d*60;
    d=d+(m2-m1);
    d=d*60;
    d=d+(s2-s1);
    s3=d%60;
    d=d/60;
    m3=d%60;
    d=d/60;
    h3=d%24;
    d=d/24;
    d3=d;
    printf("%d dia(s)\n",d3);
    printf("%d hora(s)\n",h3);
    printf("%d minuto(s)\n",m3);
    printf("%d segundo(s)\n",s3);




}
