#include <stdio.h>
int main()
{
    int a,b,x,gcd;

    scanf("%d %d",&a,&b);
    if(a>b){
       x=b;
    }
    else{
       a=x;
    }
    for(;x>=1;x--){
        if(a%x==0&&b%x==0){
          gcd=x;

        }
    }
    printf("the value of gcd is %d\n",gcd);
    return 0;
}


