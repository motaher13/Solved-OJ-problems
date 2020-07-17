#include <stdio.h>
int sqr();
int main()
{
    int answere;
    answere=sqr();

    printf("%d",answere);
    return 0;
}
int sqr()
{
    int num;
    scanf("%d",&num);
    return num*num;
}
