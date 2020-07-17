#include <stdio.h>

void fact(char pass[]){
     char ch;
     int i=0;
     while(1){
     ch=getch();
     if(ch=='\r')break;
      else putchar("*");
     pass[i]=ch;
    i=i+1;


     }
     pass[i]='\0';

}
int main()
{int i;
    char password[100];
     fact(password);
     printf("%s",password);
  //for(i=0;password[i]!='\0';i++)printf("%c",password[i]);


}
