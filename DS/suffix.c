#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char s[1000];
    scanf("%s",s);
    l=strlen(s);

    for(i=1;i<=l;i++)
    {
        for(j=l-i;j<l;j++)
            printf("%c",s[j]);
        printf("\n");

    }


}
