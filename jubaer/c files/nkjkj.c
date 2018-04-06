#include <stdio.h>
int main()
{
    char s1[15],s[15];
    int ln=0,i;
    scanf("%s %s",s,s1);
    while(s[ln]!='\0'){
    ln++;
    }
    for(i=0;s1[i]!='\0';i++){
     s[ln+i]=s1[i];
    }
     s[ln+i]=s1[i];

    printf("%s",s);
    return 0;




}
