#include <stdio.h>
int main()
{
    long long a,b,c,d,i,e,f;
    while(scanf("%lld%lld",&a,&b)){
    if(a==0&&b==0)break;
    if(b>a-b){
    b=a-b;
    }
    e=b;
    f=b;
    c=1;
    a=a-b;
    for(i=1;i<e+1;i++){
    c=c*(a+i);
    c=c/i;
    }
    printf("%lld\n",c);
    }
    return 0;

}
