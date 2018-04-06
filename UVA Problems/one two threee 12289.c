#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,l1,m=0,n;
    scanf("%d",&n);
    char str[n][100];
    char str1[3][100]={"one","two","three"};

    for(i=0;i<n;i++)
        scanf("%s",str[i]);

    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
        {
            l=strlen(str[i]);
            l1=strlen(str1[j]);
            if(l==l1)
            {
                for(k=0;k<l;k++)
                    if(str[i][k]==str1[j][k])
                        m++;

                    if(m==l-1 || m==l)
                        printf("%d\n",j+1);

                        m=0;
                    if(i>=n)
                        break;

            }

        }
    return 0;
}
