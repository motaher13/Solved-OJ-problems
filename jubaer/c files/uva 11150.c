#include <stdio.h>
int main()
{
    int i,j,k,r,n,sum;
    while(scanf("%d",&i)==1){
     n=i;
     sum=i;
    if(i%3==2)j=i+1;
    else{
        j=i;
    }

    while(j>=3){

     r=j%3;
    k=j/3;
    j=r+k;
     sum=sum+k;
    }
  if(i%6==0||(i+2)%6==0){
    printf("%d\n",sum+1);
  }
else
   printf("%d\n",sum);
    }
    return 0;
}
