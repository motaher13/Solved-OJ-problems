#include <stdio.h>
int main()
{
    int ara[20],n,i,j,t;
   while(scanf("%d",&n)){

    for(i=0;i<n;i++){
   scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(ara[i]<ara[j]){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;

    }
    }
    }
    printf("\n\n");
    printf("%d",ara[0]);
    printf("\n\n");
   }
}
