//IN=ABCDE
//OUT=AEBDCCDBEA
#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=l-1;i>=0;i--)
        s[i*2]=s[i];
    j=(l-1)*2;
    for(i=1;i<l*2;i=i+2)
    {
        s[i]=s[j];
        j=j-2;
    }
    s[i]='\0';
    for(i=0;i<l*2;i++)
        printf("%c",s[i]);

}
