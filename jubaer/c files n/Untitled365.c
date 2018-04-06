#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[80];
    char str2[89],*p1,*p2;
    int i;
    printf("enter a string");
    gets(str1);
    for(i=0;str1[i];i++)


    p1=str1+strlen(str1)-1;
    p2=str2;
    while(p1>=str1)
    *p2++=*p1--;
    *p2='\0';
    printf("%s %s",str1,str2);
    return 0;
}

