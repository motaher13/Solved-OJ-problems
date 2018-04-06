#include <stdio.h>
int main()
{

    long long a,b,n;
    scanf("%lld",&n);
    n=(n/2)+1;
    ///a=(n*(2+(n-1)*2))/2;
   a=n*n;
    b=(a*2-1)+(a*2-3)+(a*2-5);
   printf("%lld",b);



}
