#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    do{
       printf("enter your fucking choice:\n");
       printf("add,minus,substract,dividetion");
       printf("enter the first number");
       ch=getche();
       }while(ch!='A'&&ch!='B'&&ch!='C'&&ch!='D');
       printf("enter the first letter");
       scanf("%d",&a);
       printf("enter the second letter");
       scanf("%d",&b);
       switch(ch){
       case 'A':printf("%d",a+b);
       break;
       case 'B':printf("%d",a-b);
       break;
       case 'C':printf("%d",a*b);
       break;
       case 'D':
           printf("enter your choice");
           ch=getche();
           switch(ch){
               case 'T':if(b!=0){
                   printf("%d",a/b);
               }
               if(b=0){
                    printf("the answere is not recognizable");
               }
               break;
           }





       break;
       }
       return 0;
}
