#include <stdio.h>
#include <conio.h>
int main()
{
    double amount;
    amount=0.20;
    printf("printing 5-percent tax table\n\r");
    printf("press a key to stop\n\n\r");
    do{
    printf("amount %f,tax:%f\n\r",amount,amount*0.05);
    if(kbhit())break;
    amount=amount+0.20;
    }while(amount<100);



    return  0;


}
