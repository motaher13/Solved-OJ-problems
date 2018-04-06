#include <stdio.h>
int get_sqr();
int main()
{
    int sqr;
    sqr=get_sqr();
    printf("%d",sqr);
    return 0;
}
int get_sqr()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    return num*num;
}
