#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,p,q,n,d,r,s;
    int m[1000],a[1000];
    while(scanf("%d %d %d",&n,&d,&r)==3)
    {
        if(n==0 && d==0 && r==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&m[i]);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            {
                if(m[i]>m[j])
                {
                    k=m[i];
                    m[i]=m[j];
                    m[j]=k;
                }
                if(a[i]<a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }

        s=0;
        for(i=0;i<n;i++)
        {
            k=m[i]+a[i]-d;
            if(k>0)
                s=s+k*r;
        }
        printf("%d\n",s);

    }
    return 0;
}

