#include<stdio.h>
int main()
{
    int i;
    char ch;
    FILE *p;
    p=fopen("a.txt","w");
    for(i=0;i<10;i++)
        fprintf(p,"%d\n",i);
    fclose(p);

    p=fopen("a.txt","a");
    for(i=11;i<20;i++)
        fprintf(p,"%d\n",i);
        fclose(p);
}
