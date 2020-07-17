#include <stdio.h>
int main()
{
    long long a,b,c,t,q,r;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3){
    if(a==0&&b==0&&c==0){
    break;
    }
    else {
      r=a*a;
    t=b*b;
    q=c*c;
    if((r+t==q)||(r+q==t)||(q+t==r)){
    printf("right");
    }
    else {
    printf("wrong");
    }
    }
    printf("\n");
    }
    return 0;
}
