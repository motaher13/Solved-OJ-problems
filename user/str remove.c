#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,l;
    char ste[1000],str[1000];
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i<=123]))
           {
               ste[j]=str[i];
               j++;
           }
    }
    ste[j]='\0';
    strcpy(str,ste);
    printf("%s",str);
}
