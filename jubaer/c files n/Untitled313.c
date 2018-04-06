#include <stdio.h>
int main()
{
    int i;
    int ara[5];

    for(i=1;i<6;i++)ara[i-1]=i;
    for(i=0;i<5;i++)printf("%d\n",ara[3]);
    return 0;
}
