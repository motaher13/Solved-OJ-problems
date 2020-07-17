#include <stdio.h>
int sqr(int num);
int main()
{
    sqr(10);
    return 0;
}
int sqr(int num)
{
    printf("%d",num*num);
}
