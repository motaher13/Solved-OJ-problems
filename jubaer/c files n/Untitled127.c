#include <stdio.h>
int outnum( int num);
int main()
{
    outnum(89);
    outnum(67);
    outnum(78);
    return 0;
}
int outnum(int num)
{
    printf("%d",num);
}
