#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p=0,q;
    float pi,x;
    while(scanf("%d",&l)!=EOF)
    {
        if(l==0)
            break;
        p=0,q=0;
        int a[l];
        q=(l-1)*l/2;

        for(i=0;i<l;i++)
            scanf("%d",&a[i]);
        for(i=0;i<l-1;i++)
            for(j=i+1;j<l;j++)
        {
            m=a[i];
            n=a[j];
            if(n>m)
            {
                n=n^m;
                m=m^n;
                n=n^m;
            }
            while(1)
            {
                k=m%n;
                if(k==0)
                    break;
                m=n;
                n=k;
            }
            if(n==1)
                p++;
        }
        if(p==0)
            printf("No estimate for this data set.\n");

        else{
        x=(float)6*q/p;
        pi=sqrt(x);
        printf("%.6f\n",pi);}
    }
    return 0;
}
