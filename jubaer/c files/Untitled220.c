#include <stdio.h>
int main()
{
    int pos=0,neg=0,i;
    int ara[1000];
    for(i=1;i<10;i++){
    printf("%d\n:",i);
    scanf("%d",&ara[i]);
    if(ara[i]>0){
    pos++;

    }
    if(ara[i]<0){
    neg++;
    }
    }
    printf("%d %d",pos,neg);
    return 0;
 }
