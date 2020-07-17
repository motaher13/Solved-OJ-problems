#include<stdio.h>
#include<conio.h>
int main()
{
    char str[30];
    FILE *p;

    /*p=fopen("b.txt","w");
    gets(st);
    fputs(st,p);
    fclose(p);*/

    p=fopen("b.txt","r");
    fgets(str,17,p);

    printf("%s",str);

    return 0;

}


