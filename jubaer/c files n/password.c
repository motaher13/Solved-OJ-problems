#include <conio.h>
#include <stdio.h>
void pass_eg(char pass[]){
     int i=0 ;
     char ch;
     while(1){
     ch=getch();
     if(ch==13)break;
     putchar("*");
     pass[i++]=ch;
     }
     pass[i]='\0';


}
int main(){

    char pass[45];
    pass_eg(pass);
    printf("%s",pass);


}
