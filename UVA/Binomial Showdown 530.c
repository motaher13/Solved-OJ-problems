#include<stdio.h>
int main()
{
    long long i,j,k,l,m,o,p,a;
    double n,r,n1,r1,f;
    while(scanf("%lf %lf",&n,&r)==2)
    {
        if(n==0 && r==0)
            break;
        else{
        r1=1,n1=1;
        if(r>n-r)
            r=n-r;

        for(i=1;i<=r;i++)
            r1=r1*i;

        for(i=1;i<=r;i++)
        {
            n1=n1*n;
            n=n-1;
        }
        f=n1/r1;
        printf("%.0lf\n",f);}

    }
    return 0;
}
