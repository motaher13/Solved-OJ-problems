#include<stdio.h>
int main()
{
    int i,j,l;
    FILE *p;
    p=fopen("output.txt","w");
    for(i=0;i<15;i++){
        fprintf(p,"%d\n",i);
        printf("%d\n",i);}
        fclose(p);
}
