#include <stdio.h>
int main()
{
    int ara[110],visit[100000];
    int i,j,k,l,m,n,t,p;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    scanf("%d",&p);
   for(i=0;i<p;i++){
    scanf("%d",&ara[i]);
   }
   for(i=1;i<=n;i++){
    visit[i]=0;
   }
   m=0;
   k=1;
   l=0;
   for(j=0;j<p;j++){
        k=1;
    for(i=1;i<=n;i++){
        if(k!=6&&k!=7&&visit[i]==0&&i%ara[j]==0){
            visit[i]=1;
            m++;
        }
   if(k==7)k=0;
   k++;
    }
   }
   printf("%d\n",m);
    }
    return 0;
}
