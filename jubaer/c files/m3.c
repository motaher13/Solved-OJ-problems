#include<stdio.h>
int main()
{
    char c;
    FILE *p;
    p=fopen("a.txt","w");
    fprintf(p,"well\n");
    fputs("hfoutrei\n",p);
    fclose(p);

    p=fopen("test.txt","r");
    while((c=getc(p))!=EOF)
        putchar(c);
    fclose(p);


}
