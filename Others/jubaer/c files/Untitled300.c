#include <stdio.h>
int main()
{
    int *p,q,temp;
    temp=67;
    p=&temp;
    q=*p;
    printf("%d",q);
    return 0;
}
