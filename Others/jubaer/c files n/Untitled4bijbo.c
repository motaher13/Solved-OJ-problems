#include <stdio.h>
int main()
{
    char s[78],s1[78];
    int temp,i;
    scanf("%s",s);
    i=0;
while(1){

    s1[i]=s[i];
    if(s[i]=='\0')break;
    else i++;
}


    printf("%s",s1);



}
