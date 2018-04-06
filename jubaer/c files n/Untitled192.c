#include <stdio.h>
int main()
{
    int ans,n,a;
    printf("enter answere");
    scanf("%d",&ans);
          for(n=0;n<10;n++){

          if(ans==7){
          printf("ans is true");

          }
          else{
          if(ans<7){
          printf("ans is high");
          scanf("%d",&ans);
          }
          if(ans>7){
          printf("ans is low");
          scanf("%d",&ans);
          }
           if(n>=10)printf("out of time");
          }


          }
           n=0;
           while(n<9){

                n++;
           }
            printf("%d",n);

     return 0;
}
