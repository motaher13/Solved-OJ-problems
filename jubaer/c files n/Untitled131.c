#include <stdio.h>
int weight();
int main()
{
    int moon;
    moon=weight();
    printf("%d",moon);
    return;
}
int weight()
{
       int earth;
       printf("enter earth:");
       scanf("%d",&earth);
       return earth*(17/100);
}
