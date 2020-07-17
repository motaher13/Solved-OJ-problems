#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    char s1[40];
    scanf("%s%s",s,s1);
    int ck;
   if(strlen(s)>strlen(s1))printf("a>b");
    else if(strlen(s)<strlen(s1))printf("a<b");
    if(strcmp(s,s1)==0)printf("same");
    else if(strcmp(s,s1)>0)printf("a>b");
    else if(strcmp(s,s1)<0)printf("a<b");





}
