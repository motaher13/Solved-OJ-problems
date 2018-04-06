#include <stdio.h>
int main()
{
    int a=0,b=1,i,t,n,sum;
        scanf("%d",&n);

    printf("%d\t",a);

//0 1 1 2 3 5  8 13

    for(i=0;i<=n;i++){
       sum=a+b;
      // printf("%d\t",sum);
       t=sum;
       sum=b;
       b=t;
       t=b;
       b=a;
       a=t;


    }

    printf("%d uhjk",sum);


}
