#include <stdio.h>
int main()
{
    int n,mul;
    while(scanf("%d",&n)==1){
    mul=1;
    for(;n>=1;n--){
    mul=mul*n;
    }
    printf("%d\n",mul);
    }
    return 0;
}
