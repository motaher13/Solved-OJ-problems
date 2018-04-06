#include <stdio.h>
int main()
{
    long long a,b,d,l,s;
    l=1;
   while(scanf("%lld%lld",&b,&s)){
    if(s==0&&b==0)break;
    printf("%lld %lld\n",b,s);
    if(b==s)("Case %lld: :-|\",l);
    if(b==0||b==1)printf("Case %lld: :-\\",l);
    else if(b>s)printf("Case %lld: :-(",l);
    else if(b<s)("Case %lld: :-|\",l);
    l++;
    printf("\n");
    }
    return 0;

}
