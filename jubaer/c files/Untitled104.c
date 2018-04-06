#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char decimal[10];
    int binary,len,power,i,count;
    printf("enter the number:");
    scanf("%s",&decimal);
    binary=0;
    len=strlen(decimal);
    count=0;
    for(i=0;i<len;i++){
       if(decimal>=(2,power)){
         binary+=  1;
         count++;
       }
       else if(decimal<(2*power)){
            binary +=  0;
            count ++;
       }
       power--;

    }
    printf("value is %d\n",binary);
    return 0;
}
