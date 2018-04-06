#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="pointers are full of fun";
    char str2[80],*p,*p2;
    p=str1+strlen(str1)-1;
    p2=str2;
    while(p>=str1)
    *p2++=*p--;

    printf("%s %s",str1,str2);
    return 0;
}
