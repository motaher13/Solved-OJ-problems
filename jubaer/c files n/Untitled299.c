#include <stdio.h>
int main()
{
    int *p,q;
    q=102;
    p=100;
    p=&q;
    printf("%d\n",*p);
    printf("\n");
    *p=10000;
    printf("%d ",q);
    return 0;
}
