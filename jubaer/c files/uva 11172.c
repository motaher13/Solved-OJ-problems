#include <stdio.h>
int main()
{
    int n;
    long long a,b;
    while(scanf("%d",&n)==1){
    while(n--){
    scanf("%lld%lld",&a,&b);
    if(a>b){
    printf(">");
    }
   else if(a<b){
   printf("<");
   }
   else {
   printf("=");
   }
   printf("\n");
    }

   }
  return 0;
}
