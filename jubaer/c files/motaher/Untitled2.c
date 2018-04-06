
#include<stdio.h>
#define NULL 0
int main()
{
    int j;
    int *q;
    char ch,fname[50];
    gets(fname);


    if((q=fopen("fname","r"))==NULL)
        printf("no");
    else
    {

        while((fscanf(q,"%d",&j))!=EOF)
        {
            printf("%d\n",j);

        }
    }
}
