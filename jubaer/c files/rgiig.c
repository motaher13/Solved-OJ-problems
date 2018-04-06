#include <stdio.h>
int ara[1000000];
int main()
{
    int i,j,g,n,t,m,r;
    for(n=2;n<501;n++){
            g=0;
    for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
    m=i;
    r=j;
    while(r!=0){
    t=r;
    r=m%r;
    m=t;
    }
    g=g+m;
    }
    }
    ara[n]=g;
    }
    while(scanf("%d",&t)){
            if(t==0)break;
            printf("%d\n",ara[t]);
    }
    return 0;
}
