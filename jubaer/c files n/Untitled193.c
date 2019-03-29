#include <stdio.h>
int main()
{
     int n,p=0,neg=0;
     while(scanf("%d",&n)!=EOF){
     if(n>0){
     p++;
     }
     if(n<0){
     neg++;
     }
     printf("%d %d\n",p,neg);
     }
     return 0;
}
