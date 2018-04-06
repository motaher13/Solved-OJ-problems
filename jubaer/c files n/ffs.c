#include <stdio.h>
int main()
{
    long long n,i,m,max=0,k,t;
    scanf("%llu %llu",&n,&m);
      if(n>m){
      t=n;
      n=m;
      m=t;
      }
      for(;n<=m;n++){
       k=n;

        for(i=0;k>1;i++){
         if(k%2==0){
          k=k/2;
         }
         else{
          k=(3*k)+1;
         }
        }

        if(max<i)max=i;
      }

    printf("%llu",max);
    return 0;
}
