#include <stdio.h>
int main()
{
    char str[]="pointers are fun";
    char *p;
    int i;
    p=str;
    for(i=0;p[i];i++)
    printf("%c",p[i]);
    return 0;
}
