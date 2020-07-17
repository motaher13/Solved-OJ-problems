#include <stdio.h>
int main()
{
    int i;
    char j;
    i=0;
    for(j=1;j<101;j++)i=j+i;
    printf("%d",i);
    return 0;
}
