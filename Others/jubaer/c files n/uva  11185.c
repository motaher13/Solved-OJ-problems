#include <stdio.h>
int main()
{
    long long int a;
    int ara[80],i,k,l,p;
    while(scanf("%lld",&a)==1){
            p=a;
            l=0;
            if(a==0){
                break;
            }

     else {
    i=0;
    while(a>=1){
    ara[i]=a%2;
    if(ara[i]==1)l++;
    a=a/2;
    i++;
    }
    k=i;
    printf("The parity of ");
    for(k=i-1;k>=0;k--){
    printf("%d",ara[k]);
    }
    printf(" is %lld (mod 2).",l);
    printf("\n");
     }
    }
    return 0;
}
