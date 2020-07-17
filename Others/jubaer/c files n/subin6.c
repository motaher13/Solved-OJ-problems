#include <stdio.h>
//#include <math.h>
int main()
{
    double j;
   int ara[30],i,k,l;
    while(scanf("%d",&l)!=EOF){
    for(i=0;i<l;i++){
    scanf("%d",&ara[i]);
    }
    for(i=0;i<l;i++){
    k=0;
    do{
    j=sqrt(ara[i]);
    if(j==1){
            printf("yes");
         break;
    }
     else if(j==k){
        printf("yes");
        break;
    }
    else if(k==ara[i]/2)printf("no");
    k++;
    }while(k<=ara[i]/2);
        printf("\n\n");
    }


    }
    return 0;
}
