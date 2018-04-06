#include <stdio.h>
int main()
{
    int marks,count,i;
    int f_m[]={67,80,98,56,87,88,78,77,79,69};
    for(marks=56;marks<=100;marks++){
          count=0;
          for(i=0;i<10;i++){
              if(f_m[i]==marks){
                 count++;
              }
          }
          printf("marks:%d count:%d\n",marks,count);
    }
    return 0;
}
