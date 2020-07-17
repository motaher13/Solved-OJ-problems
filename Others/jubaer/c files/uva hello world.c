#include <stdio.h>
int main()
{
    int i,j,k,l,sum,n,r;
    r=1;
    while(scanf("%d",&n)){
            if(n<0)break;
    sum=1;
    for(i=1,l=0;;i++,l=l+2){

    sum=sum*2;
    if(sum>=n)break;
    }
    if(n==1) printf("Case %d: 0\n",r);
  else  printf("Case %d: %d\n",r,i);
    r++;
    }
    return 0;
}
