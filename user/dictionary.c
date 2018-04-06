#include<stdio.h>
int main()
{
    int i=0,j,k=0,l,m,n,q=3;
    char s[100][100],p[1000];

    for(i=0;i<3;i++)
    gets(s[i]);

    for(j=0;j<i;j++)
    {
        for(k=0;k<i-j;k++)
        {
            if(strcmp(s[k],s[k+1])>0)
            {
                strcpy(p,s[k]);
                strcpy(s[k],s[k+1]);
                strcpy(s[k+1],p);
            }


        }
    }
    for(j=0;j<=i;j++)
    {
        printf("%s",s[j]);
        printf("\n");
    }

}
