#include <stdio.h>
int main()
{
    float num1,num2,num3;
    int choice;
    printf("1:substract all the number,2:add all the number\n");
    printf("enter choice:");
    scanf("%d",&choice);
    printf("enter number 1:");
    scanf("%f",&num1);
    printf("enter number 2:");
    scanf("%f",&num2);
    printf("enter number 3:");
    scanf("%lf",&num3);
    if(choice==1){
    printf("%f",num1*num2*num3);
    }
    if(choice==2){

    printf("%f",num1+num2+num3);
    }
    return 0;
}
