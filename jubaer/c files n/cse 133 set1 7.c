#include <stdio.h>
int main()
{
    int i,j,k,n,r;

  while(scanf("%d",&n)==1){
       j=0,k=1;
    for(i=0;i<=n;i++){
    if(i==n)printf("%d\n",j);
    r=j+k;
    j=k;
    k=r;
    }
  }
return 0;
}
