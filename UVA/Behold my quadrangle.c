#include<stdio.h>
int main()
{
    long long i,j,k,a,b,c,d,s,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
            printf("square\n");
        else if( (a==b && c==d) || (b==c && d==a) || (a==c&& b==d))
            printf("rectangle\n");
        else if(a>=b+c+d || b>=c+d+a || c>d+a+b || d>a+b+c)
            printf("banana\n");
        else
            printf("quadrangle\n");
    }
    return 0;
}
