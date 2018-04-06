#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,r;
    while(scanf("%d%d",&n,&m)){
    k=0;
    for(i=0;i<n;i++){
        l=1;
        for(j=0;j<m;j++){
            scanf("%d",&r);
            if(r==0)l=0;
        }
        if(l!=0)k++;

    }
    printf("%d\n",k);
    }
    return 0;

}
