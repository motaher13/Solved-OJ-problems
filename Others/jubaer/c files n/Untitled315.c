#include <stdio.h>
int main()
{
    int ara1[10],ara2[10];
    int i;
    for(i=1;i<11;i++)ara1[i-1]=i;
    for(i=0;i<10;i++)ara2[i]=ara1[i];
    for(i=0;i<10;i++)printf("%d\n",ara2[i]);
    return 0;
}
