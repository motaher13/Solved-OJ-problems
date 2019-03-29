#include <stdio.h>
int convert();
int main()
{
    int pound;
    pound=convert();
    printf("%d",pound);
    return 0;
}
int convert()
{
    int dollar;
    printf("Enter the amount:");
    scanf("%d",&dollar);
    return (dollar*17)/100;
}
