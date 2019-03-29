#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t,b;
    char s[200];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        b=0,k=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='O')
            {
                b++;
                k=k+b;
            }
            if(s[i]=='X')
                b=0;
        }
        printf("%d\n",k);
    }
    return 0;
}
