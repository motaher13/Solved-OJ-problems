
#include<stdio.h>

char str[30];
int l,x=0,g;

void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int checkswap(int i,int j)
{
    for(int k=i;k<j;k++)
    if(str[k]==str[j])
        return 0;
    return 1;
}

void call(int i)
{
    int j=100;

    if(i==l-1)
    {
        int sum=0;
        for(j=l-1;j>=0;j--)
            sum=sum*10+(str[j]-48);
        x+=sum;
        g++;
    }
    for(j=i;j<l;j++)
    {
        if(checkswap(i,j))
        {
            swap(str+i,str+j);
            call(i+1);
            swap(str+i,str+j);
        }

    }
}

int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&str);
        l=strlen(str);
        x=0,g=0;
        call(0);
        printf("%d %d\n",g,x);
    }
}
