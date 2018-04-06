#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char binary[67];
    int power,i,decimal,len;
    printf("enter the number:");
    scanf("%s",&binary);
    decimal=0;
    len=strlen(binary);
    power=len-1;
    for(i=0;i<len;i++){
       decimal += (binary[i]-'0')*pow(2,power);
       power--;
    }
    printf("value is %d\n ",decimal);
    return 0;
}
