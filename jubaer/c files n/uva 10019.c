#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,r,u,t,ara[1000];
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    m=n;
    i=0;
    l=0;
     while(m!=0){
  if(m%2!=0)l++;
    m=m/2;
    i++;
    }
    k=0;
    r=n;
    while(r!=0){
    ara[k]=r%10;
    r=r/10;
    k++;
    }
    u=0;
    j=0;
  for(i=0;i<k;i++){
    while(ara[i]!=0){
        if(ara[i]%2!=0)u++;
        ara[i]=ara[i]/2;
    }
  }
    printf("%d %d\n",l,u);
    }
return 0;
}
