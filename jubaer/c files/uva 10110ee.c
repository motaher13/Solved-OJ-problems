#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)){
    if(n==0)break;
    if((double)sqrt(n)==(int)sqrt(n))printf("yes\n");
    else printf("no\n");
    }
    return 0;
}
