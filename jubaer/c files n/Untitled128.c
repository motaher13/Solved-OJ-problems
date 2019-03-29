#include <stdio.h>
int sum(int x,int y,int z);
int main()
{
    sum(6,8,9);
    sum(5,9,5);
    return 0;
}
int sum(int x,int y,int z)
{
    printf("%d\n",x*y*z);
}
