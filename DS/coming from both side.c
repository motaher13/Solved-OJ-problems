#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=1;i<=l;i++)
    {
        for(j=0;j<i;j++)
            printf("%c",s[j]);
        printf("--");
        for(k=l-i;k<l;k++)
            printf("%c",s[k]);
        printf("\n");
    }
}
