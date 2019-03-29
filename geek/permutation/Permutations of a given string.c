#include<stdio.h>
int l;
char str[20];
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void permutate(int i)
{
    int j;
    if(i==l-1)
        printf("%s\n",str);
    else
    {
        for(j=i;j<l;j++)
        {
            swap(str+i,str+j);
            permutate(i+1);
            swap(str+i,str+j);
        }
    }
}
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&str);
        l=strlen(str);
        permutate(0);
    }
}
