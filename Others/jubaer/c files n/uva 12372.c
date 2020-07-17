#include <stdio.h>
int main()
{
    int a,b,c,r,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d %d %d",&a,&b,&c);
    if((a<=20)&&(b<=20)&&(c<=20)&&r<=8000){
    printf("Case %d: good",i);
    }
     else {
     printf("Case %d: bad",i);
    }
    printf("\n");
}
    return 0;
}
