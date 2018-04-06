#include <stdio.h>
long long func(long long n)
{
     if(n==1)return 1;
     else if(n%2==0){
        return func(n/2)+1;
     }
     else return func(3*n+1)+1;
}
long long max(long long a,long long b)
{
     long long mx=0,cycle;
     while (a<=b){
     cycle =func(a);
     if(mx<cycle)mx=cycle;
    a++;
     }
     return mx;
}
int main()
{

    int i,j;
       while(scanf("%d%d",&i,&j)!=EOF)

    printf("%lld",max(i,j));




}
