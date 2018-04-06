#include <stdio.h>
int fact(int i){
    int p;

    if(i==0)return 1;
     else
    return i*fact(i-1);

}
int main()
{

     int n;
     scanf("%d",&n);
     printf("%d",fact(n));


     return  0;
}
