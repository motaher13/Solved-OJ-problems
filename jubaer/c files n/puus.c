#include <stdio.h>
void func(char pass[]){
     char ch;
     int i=0;
     while(1){
     ch=getchar();
    // if(ch==13)break;
     putchar("*");
     pass[i++]=ch;

     }
      pass[i]='\0';

}
int main()
{
    char pass[200];
    func(pass);
    printf("%s",pass);




}
