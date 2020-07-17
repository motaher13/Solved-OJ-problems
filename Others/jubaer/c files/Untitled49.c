#include <stdio.h>
int main()
{
    int a,b,t,x,gcd,lcd;
    scanf("%d %d",&a,&b);
    if(a==0)a=gcd;
    else if(b==0)b=gcd;
    {
       while(b!=0){
          t=b;
          b=a%b;
          a=t;
       }

       gcd=a;
       lcd=(a*b)/gcd;
    }

       printf("value is %d\n",gcd);
       printf("value is %d\n",lcd);


    return 0;
}
