#include <stdio.h>
int sound(int m,int l);

int main()
{
    int m,l;
    m=16,l=32;
    printf("%d",sound(m,l));
    printf("%d",sound(4,92));
    printf("%d",sound(2,8));
    return 0;
}
int sound(int m,int l)
{
    int temp;
    temp= l/m;
    return temp;
}
