#include <stdio.h>
#include <string.h>
int main()
{
    char num[25], temp;
    scanf("%s", num);
    int l = strlen(num);
    int i, j;
    for(i=0, j=l-1; i < l/2; i++, j--)
    {
        temp = num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("%s\n", num);
    return 0;
}
