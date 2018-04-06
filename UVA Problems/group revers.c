#include<stdio.h>
#include<string.h>
char str[5000000];
int main()
{
    int i,j,k,l,m,n,a;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        getchar();
        gets(str);
        l=strlen(str);
        n=l/n;
        a=0;
        for(i=a+n;i<=l;i=i+n)
        {
            for(j=i-1;j>=a;j--)
                printf("%c",str[j]);
            a=i;
        }
        printf("\n");
    }
    return 0;
}
