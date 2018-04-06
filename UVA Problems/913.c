#include<stdio.h>
int main()
{
    long long n,i,j,k;
    while(scanf("%lld",&k)!=EOF)
    {
        n=(k/2)+1;
        i=n*(2+(n-1)*2)/2;
        j=(2*i-1)+(2*i-3)+(2*i-5);
        printf("%lld\n",j);
    }
    return 0;
}
