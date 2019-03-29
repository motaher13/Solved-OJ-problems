#include <stdio.h>
#include <string.h>
int main()
{
    char *p="stop";
    char str[90];
    do{
       printf("enter a string");
       gets(str);
    }while(strcmp(p,str));
return 0;
}
