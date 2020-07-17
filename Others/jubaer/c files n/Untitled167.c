#include <stdio.h>
int main()
{
    int i,num,prime;
    printf("enter the fucking number:");
    scanf("%d",&num);
    prime=1;
    for(i=2;i<num/2;i++)
       if(num%i==0)
       prime=0;
       if(prime==1)printf("the number is prime");
       else printf("the number is not prime");
       return 0;
}
