#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;n>1;i++){
            if(n==1)break;
        if(n%2==0){
       // printf("%d\t",n);
        n=n/2;
        }

        else{
         // printf("%d\t",n);
          n=(3*n)+1;

        }



    }
      printf("%d",i);

    return 0;

}
