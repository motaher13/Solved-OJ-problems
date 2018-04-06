#include<stdio.h>
#include<conio.h>
int main()
{
    char str[17];
    FILE *p;
    //clrscr();
    p=fopen("b.txt","w");

    fputs("asdffffllll\n",p);
    fclose(p);

    p=fopen("b.txt","r");
    fgets(str,17,p);
    printf("%s",str);

    return 0;

}
