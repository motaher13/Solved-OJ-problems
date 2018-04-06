#include <stdio.h>
int main()
{
    int i,n,prime;
    for(i=2;i<1000;i++){
     for(n=2;n<500;n++){
       if(i%n==0)prime=0;
       if(i==prime){
       printf("they are prime numbers %d\n",i);
       }
     }
    }
    return 0;
}
