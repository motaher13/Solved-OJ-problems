#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    char ch;
    printf("what the fuck you want");
    printf("choose:1:galoons,2:water");
    do{
       printf("enter a choice");
       ch=getche();
       }while('g'==ch&&'b'==ch);
       scanf("%d",&a);
       if('g'==ch)printf("%d",a*500);
       else if('b'==ch)printf("%d",a/1000);
       return 0;
}
