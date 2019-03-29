#include<stdio.h>

char str[30];
int l;

void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void call(int i)
{
    if(i==l-1)
    {
        printf("%s\n",str);
        return;
    }

    for(int j=i;j<l;j++)
    {
        swap(str+i,str+j);
        call(i+1);
        swap(str+i,str+j);
    }
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&str);
        l=strlen(str);
        call(0);

    }
}
