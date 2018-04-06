#include <stdio.h>
int main()
{
    long long v,t,s;

    while(scanf("%lld%lld",&v,&t)!=EOF){
        s=v*t*2;
    if(s>=0){
    printf("%lld\n",s);
    }
    else {
        printf("%lld\n",(-1)*s);
    }
    }
}
