#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int i;
    while(gets(str)){
    for(i=strlen(str)-1;i>=0;i--){
    if(((int)str[i]>47&&(int)str[i]<58)||((int)str[i]>64&&(int)str[i]<91)||((int)str[i]>96&&(int)str[i]<123))
    printf("%c",str[i]);
    }
    printf("\n");
    }
    return 0;
}
