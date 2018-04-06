#include <stdio.h>
int main()
{
    unsigned u;
    long l;
    short s;
    scanf("%u",&u);
    scanf("%ld",&l);
    scanf("%hd",&s);
    printf("%u %ld %hd",u,l,s);
    return 0;
}
