#include <stdio.h>
#include <math.h>
int main()
{
    long long B,P,M,a,b,c;
    while(scanf("%lld%lld%lld",&B,&P,&M)==3){
        a=pow(B%M, P%M);
        b=a%M;
        printf("%lld\n", b);
    }

    return 0;
}
