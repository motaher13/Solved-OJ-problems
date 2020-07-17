#include <stdio.h>
int main()
{
    char ara[60];
    int i;
    printf("enter a message within 80 alpha");
    gets(ara);
    for(i=0;ara[i];i++)printf("%c",ara[i]);
    return 0;
}
