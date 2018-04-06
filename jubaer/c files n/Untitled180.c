#include <stdio.h>
int main()
{
    int i,j;
    printf("enter the first number:");
    scanf("%d",&i);
    printf("enter the second number:");
    scanf("%d",&j);
    printf("i<j %d\n",i<j);
    printf("i<=j %d\n",i<=j);
    printf("i==j %d\n",i==j);
    printf("í>=j %d\n",i>=j);
    printf("i&&j %d\n",i&&j);
    printf("i||j %d\n",i||j);
    printf("!i !j %d %d\n",!i ,!j);
    return 0;
}
