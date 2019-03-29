#include <stdio.h>
#include <string.h>
int main()
{
    char str[90],str1[90];
    int i,n;
    scanf("%d",&n);
    for(i=0;n>=1;i++){
    if(n%2==0)str[i]='0';
    else str[i]='1';
    n=n/2;

    }
    printf("%s",str);
    for(i=strlen(str);i>=0;i--)
    printf("%c",str[i]);






}
