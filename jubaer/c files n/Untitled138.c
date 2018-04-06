#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0)printf("number is negative");
    if(num>-1)printf("number is non negative");
    return 0;
}
