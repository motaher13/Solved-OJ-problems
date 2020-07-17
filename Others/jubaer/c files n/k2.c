#include <stdio.h>
int main()
{
    int t=10239,n=32,h;
      while(t!=0){
        h=t;
        t=n%t;
        n=h;
    }

   printf("%d",n);
}
