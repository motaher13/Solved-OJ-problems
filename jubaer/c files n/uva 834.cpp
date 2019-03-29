#include <iostream>
#include <stdio.h>
int main()
{
    long long a,b,t,boo;
while(std::cin>>a>>b){
        boo=1;
  printf("[");
    while(1){

        t=b;
        printf("%lld",a/b);
        b=a%b;
        if(b==0)break;
if(boo)printf(";");
       else printf(",");
       boo=0;
        a=t;
    }
    printf("]\n");
}
return 0;
}
