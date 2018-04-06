#include <stdio.h>
int main()
{
    int i,j,k,t;
    int ara[20];
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d",&ara[i]);
    }
    for(i=0;i<t;i++){
        if(ara[i]%2==0)printf("even");
        else printf("odd");
    }
    return 0;
}
