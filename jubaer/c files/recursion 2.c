#include <stdio.h>
//void rcopy(char *s1,char *s2);
int main(){

    printf("%d",sumdigits(237));
}
int sumdigits(int n){
      if(n==0){
        return 0;
      }
      return (n%10)+sumdigits(n/10);
}
