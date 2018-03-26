#include <stdio.h>
#include <string.h>

int main()
{
    char t[600];
    gets(t);
    printf((strlen(t)>140)?"MUTE\n":"TWEET\n");
    return 0;
}
