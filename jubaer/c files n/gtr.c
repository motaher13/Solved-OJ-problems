#include <stdio.h>
int ara[20000000];
int main()
{
    long long a,b,c,d,i,j;
    for(i=3;i<=10000000;i=i+2){
    d=0;
    for(j=3;j<=sqrt(i);j=j+2){
    if(i%j==0){
    d=1;
    break;
    }
    }
    if(d==0)printf("%lld ",i);
    }

}
