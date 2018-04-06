#include <stdio.h>
#include <string.h>
int main()
{
    int i,sum=0,m;
    char str[90];
    scanf("%s",str);
    m=strlen(str);

    for(i=0;i<=strlen(str);i++){
    if(str[m-(i+1)]=='1')sum=sum+pow(2,i);
    else sum=sum+0;


    }
printf("%d\n",sum);



}
