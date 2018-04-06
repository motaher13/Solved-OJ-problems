#include <stdio.h>
int main()
{
    int n,i;
    i=1;
    while(scanf("%d",&n)){
    if(n==0)break;
    printf("Case %d: %d\n",i,n/2);
    i++;
    }
    return 0;
}
