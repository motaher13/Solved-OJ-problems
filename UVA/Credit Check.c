#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,a,m;
    char s[30];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        k=0,l=0;
        gets(s);
        for(i=0;i<19;i=i+2)
        {
            if(s[i]==' ')
                i++;
            a=(s[i]-48)*2;
            k=k+a%10+a/10;
        }
        for(i=1;i<20;i=i+2)
        {
            if(s[i-1]==' ')
                i++;
            a=s[i]-48;
            l=l+a%10;
        }
        m=k+l;
        if(m%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
