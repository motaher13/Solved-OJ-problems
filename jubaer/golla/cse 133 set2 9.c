#include <stdio.h>
int main()
{
    int n,i,ck,ara[1000],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);

    }
    for(j=0;j<n;j++){
            ck=1;
    for(i=2;i<=sqrt(ara[j]);i++){
    if(ara[j]%i==0){
    ck=0;
    break;
    }
    }
    if(ara[j]==1)printf("Case %d: no\n",j+1);
    else if(ck==0)printf("Case %d: no\n",j+1);
    else printf("Case %d: yes\n",j+1);
    }

}
