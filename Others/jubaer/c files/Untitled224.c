#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<10;i++){
      for(j=1;j<100;j++){
        printf("%d\n",j);
       if(j==6)break;
      }

    }
    return 0;
}
