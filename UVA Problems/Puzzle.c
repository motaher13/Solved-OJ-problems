#include<stdio.h>
int main()
{
    int i,j,k,l,m,o;
    char n;
    char str[5][5];
    char str1[1000];
    for(i=0;i<6-1;i++)
    {
    gets(str[i]);


    }
//for(i=0;i<5;i++){
    printf("%s",str);

    printf("\n");


 /*   gets(str1);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(str[i][j]==' ')
            {
               k=i,l=j;
            }
        }
    }

    for(j=0;str1[j]!='0';j++)
    {
        if(str1[j]=='A')
        {
            n=str[k-1][l];
            str[k-1][l]=str[k][l];
            str[k][l]=n;
            k=k-1;
        }
       else if(str1[j]=='B')
        {
            n=str[k+1][l];
            str[k+1][l]=str[k][l];
            str[k][l]=n;
            k=k+1;
        }
       else if(str1[j]=='L')
        {
            n=str[k][l-1];
            str[k][l-1]=str[k][l];
            str[k][l]=n;
            l=l-1;
        }
       else if(str1[j]=='R')
        {
            n=str[k][l+1];
            str[k][l+1]=str[k][l];
            str[k][l]=n;
            l=l+1;
        }
    }*/
    //for(i=0;i<5;i++){
    //printf("%s\n",str[i]);
   // }
}
