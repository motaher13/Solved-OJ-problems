#include <stdio.h>
int main()
{
    int a[80]={10,20,30,40,50,67};
    int *p;
    p=&a;
    printf("%d",*(p+3));
    return 0;
}
