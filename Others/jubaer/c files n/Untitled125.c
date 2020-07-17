#include <stdio.h>
double sum(int x,int y);
int main()
{
    sum(1,2);
    sum(56,89);
    sum(54,90);
    return 0;
}
double sum(int x,int y)
{
     printf("%d\n",x+y);
     return 0;
}
