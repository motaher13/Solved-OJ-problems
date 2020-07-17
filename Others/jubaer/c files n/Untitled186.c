#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("what do you want?");
    printf("Add,Substract,Minus,Plus");
    printf("enter first letter");
    ch=getchar();

    scanf("%d",&a);
    scanf("%d",&b);
    if(ch=='A')printf("%d\n",a+b);
    if(ch=='B')printf("%d\n",a-b);
    if(ch=='C')printf("%d\n",a*b);
    if(ch=='D'&&b!=0)printf("%d\n",a/b);
    return 0;
}
