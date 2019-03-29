#include <stdio.h>
int main()
{
    long long a,b,c,d,e,p;
    e=1;
   while(scanf("%lld%lld",&p,&b)){
   if(p<0&&b<0)break;
   a=p;
    c=1;
    d=(b-1)/3;
    while(a!=1){
    if(a%2==0){
    a=a/2;
    }
    else {
    if(a<=d)a=a*3+1;
    else break;
    }
    c++;
    }
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",e,p,b,c);
    e++;
    }
    return 0;
}
