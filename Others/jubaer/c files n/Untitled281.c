#include <stdio.h>
int main()
{

    char str[78];
    int i;
    printf("enter the message within 78 characters");
    gets(str);
    for(i=0;i<80;i++)printf("%c",str[i]);
    return 0;

}
