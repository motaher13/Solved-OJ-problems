#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,p,q;
    double ara[10000],s,d,e;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            s=0;
        for(i=0;i<n;i++){
            scanf("%lf",&ara[i]);
            s=s+ara[i];}
        s=s/n;
        s=s*1000;
        p=(int)s;
        q=p%10;
        p=p/10;

        if(q>=5)
            p=p+1;

        s=(double)p/100;

        d=0,e=0;
        for(i=0;i<n;i++){
            if(ara[i]>s)
                d=d+ara[i]-s;
            if(ara[i]<s)
                e=e+s-ara[i];}
        printf("s=%lf\n",s);
        //if(d<e)
            printf("d=$%.2lf\n",d);
        //else
            printf("e=$%.2lf\n",e);
    }
    return 0;
}
