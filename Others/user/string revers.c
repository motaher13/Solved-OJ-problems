#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
    int i,j,k;
    i=strlen(s);
    k=i-1;
    char s1[1000];
    for(j=0;j<i,k>=0;j++,k--)
    {
        s1[k]=s[j];

    }
    s1[i]='\0';
    puts(s1);
}
int main()
{
    int i,j,k;
    char s[1000],s1[1000];
    gets(s);
    reverse(s);

}
