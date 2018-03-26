#include<stdio.h>
int main()
{

    double a,b;
    int x;
    do{
        do{
            scanf("%lf",&a);
              if(a<0||a>10)
              printf("nota invalida\n");

          }while(a<0||a>10);

        do{
        scanf("%lf",&b);
        if(b<0||b>10)
        printf("nota invalida\n");

         }while(b<0||b>10);

        printf("media = %.2lf\n",(a+b)/2);

        do{
          printf("novo calculo (1-sim 2-nao)\n");
          scanf("%d",&x);
          }while(x!=1&&x!=2);
    }while(x!=2);

    return 0;

}
