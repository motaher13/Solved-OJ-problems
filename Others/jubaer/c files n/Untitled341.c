#include <stdio.h>
int main()
{
    int q,*p;
    p=&q;
    q=90;
    printf("%d",*p);
    return 0;
}
