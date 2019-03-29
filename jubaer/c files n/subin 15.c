#include <stdio.h>
int main(){
    int i,j,k,n[10],t=0;
    scanf("%d",&k);
    t=0;
   while(t<k){
    scanf("%d",&n[t]);
    t++;
   }
    for(t=0;t<k;t++){
            printf("for %d\n",n[t]);
    for(j=0;j<n[t];j++){

    for(i=0;i<n[t];i++){

    printf("*");

    }
    printf("\n\n");
    }
   printf("\n");
    }

}
