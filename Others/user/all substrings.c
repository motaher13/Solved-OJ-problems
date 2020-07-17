#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    char s[1000],s1[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<=l;j++)
        {
            for(k=i;k<j;k++)
                printf("%c",s[k]);

        }
    }


}

