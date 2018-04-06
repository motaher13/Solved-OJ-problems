#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    char ch;
    for(i=1;i<1000;i++){
    if(!(i%6)){
      printf("%d,more?(y/N)",i);
      ch=getche();
      if(ch=='N'){
        break;
      }
      }
      }
      return 0;
}

