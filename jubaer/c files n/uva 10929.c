#include <stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)){
    if(n==0)break;
    else if(n%11==0){
    printf("%lld is a multiple of 11.\n",n);
    }
    else{
    printf("%lld is not a multiple of 11.\n",n);
    }
    }
   return 0;

}
