#include <stdio.h>
void swap(int *i,int *j);
int main()
{
    int num1,num2;
    num1=89;
    num2=82;
    swap(&num1,&num2);
    printf("num1:%d num2:%d",num1,num2);
    return 0;


}
void swap(int *i,int *j)
{
     int temp;
     *j=temp;
     *i=*j;
     temp=*i;


}
