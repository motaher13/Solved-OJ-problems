#include <stdio.h>
int main()
{
    int i,n,s;
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++){
       s=s+i;
    }
    printf("the s is %d\n",s);

    return 0;
}
