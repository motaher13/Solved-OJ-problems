#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("what do you want\n");
    printf("add,minus,multiple,substract");
    do{
    printf("enter choice");
    ch=getchar();
     }while(ch=='a'&&ch=='b'&&ch=='c'&&ch=='d');


    scanf("%d",&a);
    scanf("%d",&b);
    if(ch=='a')printf("%d",a+b);
    else if(ch=='b')printf("%d",a-b);
    else if(ch=='c')printf("%d",a*b);
    else if(ch=='d'&&b!=0)printf("%d",a/b);
    return 0;
}
