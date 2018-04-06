#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,k,l,m=0,n,p,q,a[200];
    char s[200][200];
    while(gets(s[i]))
    {

        a[i]=strlen(s[i]);
        if(a[i]>m)
            m=a[i];
        i++;
    }

    for(j=0;j<m;j++){
        for(k=i-1;k>=0;k--)
        {
            if(j<a[k])
                printf("%c",s[k][j]);
        }
        printf("\n");}
    return 0;
}
