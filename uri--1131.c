#include<stdio.h>
int main()
{
    int s1,s2,option;
    int total,inter,gremio,draw;
    total=inter=gremio=draw=0;
    do{

        scanf("%d %d",&s1,&s2);
        total++;
        if(s1>s2)
            inter++;
        else if(s1<s2)
            gremio++;
        else
            draw++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&option);


    }while(option!=2);
    printf("%d grenais\n",total);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
     printf("Empates:%d\n",draw);
     if(inter>gremio)
        printf("Inter venceu mais\n");
     else if(inter<gremio)
        printf("Gremio venceu mais\n");
       else
       printf("Nao houve vencedor\n");


    return 0;
}
