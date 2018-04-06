#include <stdio.h>
int main()
{
    double num1,num2,sum1,sum2,sum3,sum4;
    printf("enter a number:");
    scanf("%lf",&num1);
    printf("enter a number:");
    scanf("%lf",&num2);
    sum1=num1+num2;
    sum2=num1-num2;
    sum3=num1*num2;
    sum4=num1/num2;
    printf("value is %lf\n",sum1);
    printf("value is %lf\n",sum2);
    printf("value is %lf\n",sum3);
    printf("value is %lf\n",sum4);
    return;
}
