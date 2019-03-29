#include <stdio.h>
int main()
{
    int i,j,sum,r;
   while(scanf("%d%d",&i,&j)==2&&j>1){
          r=0;
        if(i<j){
                printf("%d\n",i);
        }

     else{
            r=0;
           sum=0;
           while(i!=0){

            sum=sum+i+r;

            i=i/j;
           if(i<j){
            sum=sum+i;
            break;
           }

    }


    printf("%d\n",sum);
}
   }
    return 0;

}
