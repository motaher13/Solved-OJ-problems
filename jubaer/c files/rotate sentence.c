#include <stdio.h>
int main()
{
    char ch,n='\0';
    int i=0;

    while(1){
    ch=getchar();
    printf("%c%c\n",n,ch);
    if((int)ch==13) i++;
           if(i==5)break;
    }

}
