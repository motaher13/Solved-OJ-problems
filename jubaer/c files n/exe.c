#include <stdio.h>
char pass(char s[]){
  char ch;
  int i;
  for(i=0;;i++){
  ch=getch();
  if(ch==13)break;
  s[i]=ch;
   putchar("*");
  }
  s[i]='\0';
 // printf("%s",s);
}
int main()
{
    char str[80];
    pass(str);
    printf("\n");
    printf("%s",str);

}
