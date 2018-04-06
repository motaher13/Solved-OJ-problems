#include <stdio.h>
#include <math.h>
int main()
{
    long long n,k;
    int t;
  scanf("%d",&t);
  while(t--){
    scanf("%lld",&n);
    n=8*n;
    k=sqrt(n+1);
    printf("%lld",(k-1)/2);
     printf("\n");
  }
  return 0;
}
