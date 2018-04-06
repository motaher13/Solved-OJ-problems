#include <stdio.h>
#include <math.h>
int main()
{
    float n,k,r,t;
  while(scanf("%f%f",&k,&r)){
        if(k==0){
            printf("inf\n");
        }
        else{
    t=1/k;
    n=pow(r,t);
    printf("%0.f\n",n);
  }
  }
  return 0;

}
