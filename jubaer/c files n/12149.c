#include <stdio.h>
int main()
{
    long long a,b,sum;
    while(scanf("%lld",&a)){
            sum=0;
    if(a==0)break;
    for(b=1;b<=a;b++){
    sum=sum+(b*b);
    }
    printf("%lld\n",sum);
}
return 0;








}
