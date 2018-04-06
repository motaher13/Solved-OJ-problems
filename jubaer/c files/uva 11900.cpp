#include <stdio.h>
int main()
{
    int i,j,k,l,ara[10000],sum,p,q,n,t;
    scanf("%d",&t);
    j=1;
    while(t--){
            scanf("%d%d%d",&n,&p,&q);
    sum=0;
    k=0;
   for(i=1;i<=n;i++){
   scanf("%d",&ara[i]);
   sum=sum+ara[i];
    if(sum>q&&k==0){
   l=i-1;
   k=1;
   }
   if(sum==q&&k==0){
   l=i;
   k=1;
   }
   else if(i==p&&k==0){
   l=i;
   k=1;
   }
   }
   printf("Case %d: ",j);
   if(k==0)printf("%d\n",i-1);
   else printf("%d\n",l);
   j++;
    }
    return 0;
}
