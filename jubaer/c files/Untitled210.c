#include <stdio.h>
#include <conio.h>
int main()
{
    int choice;
    char ch;
    printf("1:enter address\n2:delet address\n3:search the list\n4:print the list");
    do{
       printf("enter choice");
       scanf("%d",&choice);
    }while(choice==1&&choice==2&&choice==3&&choice&&4);
    if(choice==1){
        printf("america=a\nbritain=b\nchina=c");
        printf("enter address");
        ch=getche();
        if(ch=='A')printf("it is america");
        else if(ch=='b')printf("this is britain");
        else if(ch=='C')printf("this is china");
    }
    else if(choice==2)printf("delete address");
    else if(choice==3)printf("search the list");
    else if(choice==4)printf("printf the list");
    return 0;
}
