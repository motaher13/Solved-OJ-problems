#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i,root;
    if(n==2){
       return 1;
    }
    if(n%2==0){
       return 0;
    }
    root=sqrt(n);
    for(i=3;i<=root;i=i+2){
       if(n%i==0){
         return 0;
       }
    }
    return 1;
}
int main()
{
    int n,m;
    while(1){
       printf("enter the number:");
       scanf("%d",&n);
       if(n<2){
          break;
       }
       if(1==prime(n)){
          printf("%d is a prime\n",n);
       }
       else{
          printf("%d is not a prime\n",n);
       }
    }
    return 0;
}
