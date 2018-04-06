#include <stdio.h>
void fuc(int a,int b,int c){
     int x,y,sum;
     if(a+b+c!=0){

     x=a%10,y=b%10;

     sum=(x+y+c);

     fuc(a/10,b/10,sum/10);
       printf("%d",sum%10);
     }
}
int main()
{
    int a=157,b=781,c=0;
    //scanf("%d %d",&x,&y);
    fuc(a,b,c);

    return 0;
}
