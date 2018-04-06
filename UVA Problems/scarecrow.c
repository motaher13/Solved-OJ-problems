#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t;
    char s[200];
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        j=0;
        scanf("%d %s",&l,s);
        for(i=0;i<l;i++)
            if(s[i]=='.')
            {
                j++;
                i=i+2;
            }
        printf("Case %d: %d\n",k,j);

    }
    return 0;
}
