#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char s[1000];
    scanf("%s",s);
    l=strlen(s);
    for(i=1;i<=l;i++)
    {
        for(j=0;j<=l-i;j++)
        {
            for(k=j;k<j+i;k++)
                printf("%c",s[k]);
            printf("\n");
        }
    }


}
