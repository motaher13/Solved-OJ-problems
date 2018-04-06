#include <stdio.h>
int main()
{
    int *p,x=3,*q,y=4;
    p=&x,q=&y;
    *q=*p;
    printf("%d",*p**q);





    return 0;
}
