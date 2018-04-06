#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000],rev[100000];
    int i,j,l,p,r,k;
   while(gets(str)){

   r=0;
   l=0;
    while(1){
            p=0;
    for(i=l,j=0;i<strlen(str);i++,j++){

    rev[j]=str[i];

    l++;

    if((int)str[i]==32||(90<(int)str[i]||(int)str[i]<65)&&(122<(int)str[i]||(int)str[i]<97)){

    break;
    }

     p++;
    }

    for(j=p-1;j>=0;j--){
            k=(int)rev[j];
        if((65<=k&&k<=90)||(97<=k&&k<=122)){
            r++;
            break;
        }


    }

    if(str[i]=='\0'){
        break;
    }

    }
    printf("%d\n",r);
   }
   return 0;
}
