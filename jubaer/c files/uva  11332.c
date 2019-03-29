#include <stdio.h>
int main()
{
    long long n,s,sum,r;
    while(scanf("%lld",&s)){
            if(s==0){
                break;
            }
            else{
    while(s>9){
    n=s;
    sum=0;
    while(n!=0){

    r=n%10;
    n=n/10;
    sum=sum+r;
    }
    s=sum;
    }
    printf("%lld\n",s);
    }
    }
    return 0;
}
