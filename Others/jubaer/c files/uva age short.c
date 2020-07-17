#include <stdio.h>
int main()
{
   int i,j,k,n;
   int ara[20][1000000];
   while(scanf("%d",&n)==1){
        if(n==0)break;
   for(i=0;i<n;i++){
   scanf("%d",&ara[i]);
   }
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
  //  if(ara[i]>ara[j]){
    //k=ara[i];
    //ara[][i]=ara[j];
    //ara[j]=k;
    }
    }
     //printf("%d ",ara[i]);

    }
    printf("\n");
  // }
    return 0;
}
