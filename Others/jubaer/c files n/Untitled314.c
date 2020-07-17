#include <stdio.h>
int main()
{
    int i;
    int ara[9];
    scanf("%d",&i);
    for(;i<40;i++){
            ara[i-1]=i+4;
    }
    for(i=0;i<9;i++)printf("%d\n",ara[5]);
    return 0;
}
