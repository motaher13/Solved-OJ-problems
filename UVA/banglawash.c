#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,i,j,b=0,w=0,a=0,s=0,k=1;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        i=strlen(str);
        for(j=0;j<i;j++)
        {
            if(str[j]=='B')
                {
                   b++;
                }
                if(str[j]=='W')
                {
                   w++;
                }
                if(str[j]=='A')
                {
                   a++;
                }
                if(str[j]=='T')
                {
                   s++;
                }
        }
        if(b==(n-a) && b!=0)
            printf("Case %d: BANGLAWASH",k);
        else if(w==(n-a) && w!=0)
            printf("Case %d: WHITEWASH",k);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d",k,b,w);
        else if(b<w)
            printf("Case %d: WWW %d - %d",k,w,b);
        else if(a==n)
            printf("Case %d: ABANDONED",k);
        else if (b==w)
            printf("Case %d: DRAW %d %d",k,b,s);
        printf("\n");

    t--,k++,b=0,w=0,a=0,s=0;
    }
    return 0;
}
