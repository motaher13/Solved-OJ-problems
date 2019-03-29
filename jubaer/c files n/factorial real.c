#include <stdio.h>
int main()
{
    long long sum,n;
  while(scanf("%lld",&n)==1){
        if(n<0){
            n=-n;
            if(n%2==0)printf("Underflow!\n");
            else printf("Overflow!\n");
        }
    else if(n<8)printf("Underflow!\n");
    else if(n>13)printf("Overflow!\n");
    else if(n>=8&&n<=13){
            sum=1;
    for(;n>0;n--){
    sum=sum*n;
    }
    printf("%lld\n",sum);
    }
}
return 0;
}
