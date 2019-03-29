#include<stdio.h>
#include <string.h>
char str[1000000],rev[1000000],ch;
int main()
{
    int i,j,k;
    i=0;
    for(k=0;;k++){
    while(1)
    {
        ch=getchar();
        if(ch=='\n')break;
        str[i]=ch;
        i++;
    }
    str[i]='\0';
for(i=strlen(str)-1;j=0;i>=0;i--){
        rev[j]=str[i];
    j++;
}
rev[j]='\0;
if(strcmp(str,rev)==0)printf()
}
