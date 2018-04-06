#include <stdio.h>
int main()
{

    long long a,b,c,d,e,s;
    e=1;
   while(scanf("%lld %lld",&b,&s)){
        if(s==0&&b==0)break;
    if(b==1||b==0)printf("Case %lld: :-\\",e);

    if(b==s||b<s)printf("Case %lld: :-|",e);
    if(b>s)printf("Case %lld: :(",e);
    printf("\n");
    e++;
   }
   return 0;
}
