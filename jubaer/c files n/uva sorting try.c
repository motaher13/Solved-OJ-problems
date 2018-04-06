#include <stdio.h>
int ara[3000000];
int main()
{
    int i,j,k,n,m,t,l,u;
    while(scanf("%d",&n)==1){
            if(n==0)break;
    for(i=1;i<=n;i++){
    scanf("%d",&ara[i]);
    }
    m=0,l=1;
   for(u=0;;u++){
    k=0;
    for(i=l;i<n;i++){
        if(ara[i]>ara[i+1]){
            t=ara[i];
            ara[i]=ara[i+1];
            ara[i+1]=t;
            m++;
            k++;
            if(i==n-1){
                l=1;
                continue;
            }
            else {

            continue;
            }
        }
    }
    if(k==0&&m%2==0){
            printf("Carlos\n");
            break;
    }
    else if(k==0&&m%2!=0){
            printf("Marcelo\n");
            break;
    }
   }
    }
    return 0;
}
