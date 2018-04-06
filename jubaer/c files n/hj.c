#include <stdio.h>
int main()
{
    char str[90];
    gets(str);
    strcpy(str+strlen(str),"ty");
    printf("%s",str);


}
