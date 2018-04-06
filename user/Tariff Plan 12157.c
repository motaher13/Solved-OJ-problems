#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,t,r,p;
    int s[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&s[j]);
        m=0,p=0;
        for(j=0;j<n;j++)
        {
            s[j]++;
            k=s[j]/30;
            r=s[j]%30;
            if(r>0)
                m=m+k*10+10;
            else
                m=m+k*10;

            k=(s[j])/60;
            r=(s[j])%60;
            if(r>0)
                p=p+k*15+15;
            else
                p=p+k*15;

        }
            if(m<p)
                printf("Case %d: Mile %d\n",i,m);
            if(p<m)
                printf("Case %d: Juice %d\n",i,p);
            if(p==m)
                printf("Case %d: Mile Juice %d\n",i,m);
    }
    return 0;
}

