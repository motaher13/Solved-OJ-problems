#include <stdio.h>
int main()
{
    double num1,num2;
    printf("enter a number:");
    scanf("%lf",&num1);
    printf("enter a number:");
    scanf("%lf",&num2);
    printf("%lf+%lf=%lf",num1,num2,num1+num2);
    printf("%lf-%lf=%lf",num1,num2,num1-num2);
    printf("%lf*%lf=%lf",num1,num2,num1*num2);
    printf("%lf/%lf=%lf",num1,num2,num1/num2);
    return 0;
}
