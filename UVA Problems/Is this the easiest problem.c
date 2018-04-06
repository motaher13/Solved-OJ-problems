#include<stdio.h>
int main()
{
    long long i,j,k,m=1,n,a,b,c;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        m=0;
        scanf("%lld %lld %lld",&a,&b,&c);

        if(a==0 || b==0 || c==0){
            printf("Case %lld: Invalid\n",i);
            continue;}

        if((a+b)>c && (b+c)>a && (c+a)>b)
            m=1;
        if(m==0){
            printf("Case %lld: Invalid\n",i);
            continue;}

        if(a==b && b==c)
            printf("Case %lld: Equilateral\n",i);

        else if(a==b || b==c || c==a)
            printf("Case %lld: Isosceles\n",i);

        else
            printf("Case %lld: Scalene\n",i);

    }
    return 0;
}
