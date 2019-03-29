#include <stdio.h>
int main()
{
    int *p,q;

    p=&q;
    *p=90;
    printf("%d",q);
    return 0;
}
