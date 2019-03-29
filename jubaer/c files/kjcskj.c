#include <stdio.h>
#include <string.h>
int main()
{
    char a[7][10]={"hjkkvd","vsbdbjs","sjvhkj","suvdhh",""};

    char temp;
    int i=0,j;
        //for(j=i+1;j<4;j++){
           // if(strlen(a[i])>strlen(a[j])){
               temp=a[2];
               a[2]=a[1];
               a[1]=temp;
              // a[1]=a[2];
              // a[3]=temp;
          //  }
            printf("%s %s\n",a[1],a[2]);







}
