#include <stdio.h>
int main()
{
    long long n,i,m,max=0,k,t;
    while(scanf("%llu %llu",&n,&m)!=EOF){

    printf("%llu %llu ",n,m);
      if(n>m){
      t=n;
      n=m;
      m=t;
      }
      for(;n<=m;n++){
       k=n;

        for(i=1;k>1;i++){
         if(k%2==0){
          k=k/2;
         }
         else{
          k=(3*k)+1;
         }
        }

        if(max<i)max=i;
      }

    printf("%llu ",max);
    printf("\n\n");
    }
    return 0;
}
