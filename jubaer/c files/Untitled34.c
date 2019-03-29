#include <stdio.h>
int main()
{
    int n,i;
    printf("please enter a number:");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
