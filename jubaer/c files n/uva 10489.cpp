#include <stdio.h>
int main()

{
    int t,i,j,k,l,m,n,sum,u;
    scanf("%d",&t);
    while(t--){
 sum=0;
        scanf("%d%d",&m,&n);
        for(i=0;i<n;i++){

           scanf("%d",&k);
           u=1;
           for(j=0;j<k;j++){
                scanf("%d",&l);
            u=(u*l)%m;
           }
            sum=sum+u;
        }
        printf("%d",sum%m);
    printf("\n");
     sum=0;
    }

    return 0;
}
