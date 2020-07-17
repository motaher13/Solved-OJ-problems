#include <stdio.h>
int main()
{
    int sqr[10];
    int i;
    for(i=1;i<11;i++)sqr[i-1]=i*i;
    for(i=0;i<10;i++)printf("%d\n",sqr[i]);
    return 0;
}
