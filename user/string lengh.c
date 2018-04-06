#include<stdio.h>
int main()
{
    int i,j=0,l;
    char str[10000];
    gets(str);
    for(i=0; ;i++)
    {
        if(str[i]=='\0')
            break;
    }
    printf("%d",i);
}
