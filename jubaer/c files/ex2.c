#include <stdio.h>
#include <string.h>
int main()
{
int ara[80]={3,4,5,6,7},temp,i,j,ck[5],n;
   for(i=0;i<3;i++){
        scanf("%d",&ck[i]);
   for(j=0;j<6;j++){
    scanf("%d",&ara[j]);
   }
   printf("\n\n");
   }
   for(i=0;i<3;i++){
    for(j=0;j<6;j++){
        if(ck[i]==ara[j]){
            printf("%d",j+1);
            break;
        }
            else if(j==5){
                printf("no");
            }
        }
        printf("\n\n");
    }


    return 0;
}
