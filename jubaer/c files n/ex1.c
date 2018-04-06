#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,ara[20],t,l;
    char str[20][45];
    while(scanf("%d",&t)!=EOF){
    for(i=0;i<t;i++){
        scanf("%s",str[i]);
    }
    printf("\n\n");
    for(i=0;i<t;i++){
    for(l=0;str[i][l]!='\0';l++){
      if(((int)str[i][l]-48)%2==0){
        ara[l]=((int)str[i][l]-48)+1;
      }
     else {
         ara[l]=((int)str[i][l]-48)-1;
     }
    }
   for(l=strlen(str[i])-1;l>=0;l--){
    printf("%d",ara[l]);
   }
   printf("\n\n\n");
    }
    printf("\n\n\n");
    }
    return 0;
}
