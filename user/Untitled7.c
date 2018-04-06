#include<stdio.h>
int m(int n)
{
    n=n*3;
    printf("%d\n",n);
    return n;
}
int main()
{
    int n=5;
    m(n);
    printf("%d",n);
}
