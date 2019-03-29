#include <stdio.h>
int power(int m,int e);
int main()
{
    int m,e;
    m=5;
    e=3;
    printf("%d to the %d is %d\n",m,e,power(m,e));
    printf("9 to the 2nd is %d\n",power(9,2));
    printf("8 to the 3rd is %d\n",power(8,3));
    return 0;
}
int power(int m,int e)
{
    int temp=1;
    for(;e>0;e--)temp=temp*m;
    return temp;
}
