#include<stdio.h>
#include<string.h>
char s[5000000];
int main()
{
    int i,j,k,l,m,n,a,b;
    while(gets(s))
    {
        l=strlen(s);
        a=0;
        for(i=0;i<=l;i++)
            if(s[i]==' ' || i==l){
                for(b=i-1;b>=a;b--)
                    printf("%c",s[b]);
                    printf("%c",s[i]);
                a=i+1;
                }
                printf("\n");
    }
    return 0;
}
