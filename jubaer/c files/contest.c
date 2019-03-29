#include <stdio.h>
int main()
{
    long long a,b,c,d;
    scanf("%lld",&c);
    while(c--){
    scanf("%lld",&a);
    for(d=0;d<=a;d++){
    printf("%lld",d);
    if(d<a)printf("%c",' ');
    }
    printf("\n");
    }
    return 0;

}
