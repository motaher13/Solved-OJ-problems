#include <stdio.h>
int main()
{
    int i,n,m;
    n=6;
    i=1;
    m=0;
    for(;i<=10;i++){
        m=m+n;
        printf("%d*%d=%d\n",i,n,m);

    }
    return 0;
}
