#include <stdio.h>

int main()
{
    char ch;
    printf("enter the letter:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
       printf("the letter is in the upper case\n",ch);
    }
    else{
       printf("the letter is in the lower case\n",ch);
    }
    return 0;
}
