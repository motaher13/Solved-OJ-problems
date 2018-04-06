#include <stdio.h>
int main()
{
   int i,j,k,n;
   int ara[1000];
   while(scanf("%d",&n)==1){
   for(i=0;i<n;i++){
   scanf("%d",&ara[i]);
   }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(ara[i]>ara[j]){
    k=ara[i];
    ara[i]=ara[j];
    ara[j]=k;
    }
    }
    }
    printf("%d\n",ara[n-1]-ara[0]);
    }
    return 0;
}
