#include <stdio.h>
int main()

{
    long long n,i;
n=2432902008176640000;
printf("%lld\n",n);
n=1;
for(i=1000;i>=995;i--)n=n*i;
printf("%lld",n);
}
