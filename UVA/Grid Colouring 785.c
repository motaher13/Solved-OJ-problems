#include<stdio.h>
#include<string.h>
char s[500][500];
int i;
char c,d;
void dfs(int j,int k)
{
    int l=strlen(s[j]);
    if(j<0 || k<0 || j>i || k>=l)
        return;
    if(s[j][k]==c || s[j][k]==d) return;

    s[j][k]=d;
    dfs(j,k+1);
    dfs(j,k-1);
    dfs(j+1,k);
    dfs(j-1,k);
    dfs(j+1,k+1);
    dfs(j+1,k-1);
    dfs(j-1,k+1);
    dfs(j-1,k-1);

}

int main()
{
    int j,k,l,m,n,b,t;

    i=0;
    while(gets(s[i]))
    {
        i++;
        if(s[i-1][0]=='_')
        {
            i--;
            b=0;
            for(j=0; j<=i; j++)
            {
                l=strlen(s[j]);
                for(k=0; k<l; k++)
                {
                    if(s[j][k]!=' '){
                        c=s[j][k];
                        b=1;
                        break;}
                }
                if(b==1)
                break;
            }
            b=0;
            for(j=0; j<i; j++)
            {
                l=strlen(s[j]);
                for(k=0; k<l; k++)
                {
                    if(s[j][k]!=c && s[j][k]!=' ')
                    {
                        d=s[j][k];
                        s[j][k]=' ';
                        dfs(j,k);
                    }
                }
            }

            for(j=0; j<=i; j++){
                printf("%s\n",s[j]);}
            i=0;
        }
    }

    return 0;
}

