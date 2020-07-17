#include <stdio.h>
#include <conio.h>
int main()
{
    float i,a,b,c;
    char ch;
    for(i=1;i<101;i++){
     a=i*15/100;
    b=i*20/100;
    c=i*25/100;
    printf("%lf %lf %lf\n,more?(y/n)",a,b,c);
    ch=getche();
    if(ch=='n')break;
    }
    return 0;
}
