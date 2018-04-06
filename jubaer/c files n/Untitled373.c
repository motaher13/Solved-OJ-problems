#include <stdio.h>
#include <string.h>

int main()
{
    char str1[5]="one";
    char *p1;
    p1=str1;
    char str2[5]="two";

    char *p2;
    p2=str2;
    char str3[6]="three";

    char *p3;
    p3=str3;
    int i,j,k;
    for(i=0;p1[i];i++){
    for(j=0;p2[i];j++){
    for(k=0;p3[i];k++){
    if(p2!=p1&&p3!=p2&&p3!=p1){
    printf("%c %c %c\n",p1[i],p2[i],p3[i]);
    }
    }
    }
    }
return 0;
}
