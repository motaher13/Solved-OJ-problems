#include <stdio.h>
#define li 1000000
char str[1000010];
int t,l,k,i,j,n,m,r,u,d;
int ara2[1000010];
int main()
{
str[1]='0';
   for(i=2;i<=li;i=i+1){
   str[i]='1';
   }
   for(i=2;i<=li;i=i+1){
   if(str[i]=='1'){
   for(j=2;j*i<=li;j++)str[j*i]='0';
   }
   }
   u=0;
    for(i=1;i<=1000000;i++){
        if(str[i]=='1'){
         t=i;
          r=0;
            while(t!=0){
                r=r+(t%10);
                t=t/10;
            }
            if(str[r]=='1')u++;
        }
        ara2[i]=u;
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        printf("%d",ara2[m]-ara2[n-1]);
        printf("\n");
    }
  return 0;
}
