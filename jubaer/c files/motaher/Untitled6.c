#include<stdio.h>
#include<conio.h>
int main()
{
    char str[17];
    FILE *p;

    p=fopen("b.txt","w");
    gets(str);
    fputs(str,p);
    fclose(p);

   /* p=fopen("b.txt","r");
    fgets(str,17,p);

    printf("%s",str);*/

    return 0;

}

