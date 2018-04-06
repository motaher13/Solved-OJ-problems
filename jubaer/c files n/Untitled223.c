#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char ch;
    for(i=1;i<10000;i++){
    if((i%6==0)){
    printf("%d\n,more?(y/n)",i);
    ch=getche();
    if(ch=='n')break;
    }
    }
    return 0;
}
