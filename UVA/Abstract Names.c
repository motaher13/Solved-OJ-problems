#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,l1;
    char s[100][100];
    scanf("%d",&n);
    m=2*n;
    for(i=1;i<=m;i++)
        scanf("%s",s[i]);
    for(i=1;i<=m;i=i+2)
    {
        l=strlen(s[i]);
        l1=strlen(s[i+1]);
        if(l!=l1)
        {
            printf("No\n");
            continue;
        }
        else
        {
            for(j=0;j<l;j++)
            {
                if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
                {
                    if(s[i+1][j]=='a'||s[i+1][j]=='e'||s[i+1][j]=='i'||s[i+1][j]=='o'||s[i+1][j]=='u')
                        continue;
                    else{
                        printf("No\n");
                        break;}
                }
                 else
                 {
                     if(s[i][j]==s[i+1][j])
                        continue;
                    else{
                        printf("No\n");
                        break;}
                 }
            }
            if(j==l)
                printf("Yes\n");
        }
    }
    return 0;
}
