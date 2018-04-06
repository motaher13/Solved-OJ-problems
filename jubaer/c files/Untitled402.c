#include <stdio.h>
int *init(int x);
int count;
int main()
{
    int *p;
    p=init(6778);
    printf("%d",*p);

return 0;
}
int *init(int x)
{
    count=x;
    return &count;

}
