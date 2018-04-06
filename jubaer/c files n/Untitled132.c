#include <stdio.h>
double weight();
int main()
{
       double moon;
       moon=weight();
       printf("%f",moon);
       return 0;
}
double weight()
{
       int earth;
       scanf("%f",&earth);
       return earth/100;
}
