#include <stdio.h>
int main()
{
    int ara[10000],ara2[10000];
    int i,j,k,l,m,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&ara[i]);
      scanf("%d",&m);
    for(i=0;i<m;i++)scanf("%d",&ara2[i]);
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(ara[j]!=0){
    if((ara2[i]%ara[j]==0)&&ara[j]!=-1){
    ara[j]=-1;
    sum++;
    }
    }
    }
    }
    printf("%d",sum);
}
