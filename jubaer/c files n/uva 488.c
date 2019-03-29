#include <stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&n,&k);
    while(k--){
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
    printf("%d",i);
    }
    printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
   if(t!=0||k!=0) printf("\n");
    }
    }
  return 0;
}
