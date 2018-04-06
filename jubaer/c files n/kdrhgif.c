#include <stdio.h>
int main()
{
   int ara[30],i,j,k,l,m,n,p,q,r,s,count1,count2,visited[100];
   while(scanf("%d%d%d",&n,&k,&m)){
        if(n==0&&k==0&&m==0)break;
   for(i=n;i>=1;i--){
    visited[i]=0;
    ara[i]=i;
   }
   l=1,q=n,r=0;
   while(1){
    count1=0;
    for(i=l;;i++){
            if(i>n)i=1;
        if(visited[i]==0)count1++;
        if(count1==k){
            p=i;
            l=i+1;

            break;
        }
    }
    count2=0;
    for(i=q;;i--){
            if(i<=0)i=n;
        if(visited[i]==0)count2++;
            if(count2==m){
                s=i;

                q=i-1;
                if(q<=0)q=n;
                break;
            }
    }
   if(p==s)r++;
   else r=r+2;
   if(p!=s)printf("%3d",p);
   printf("%3d",s);
  visited[p]=1;
  visited[s]=1;
    if(r==n)break;
    printf(",");

   }
    printf("\n");
   }
   return 0;
}
