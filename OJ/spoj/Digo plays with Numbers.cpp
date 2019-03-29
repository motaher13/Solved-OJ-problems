#include<bits/stdc++.h>
using namespace std;
char s[1010];
string ss;
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        scanf("%s",s);
        l=strlen(s);
        int p=l-1,q=0,r=0;
        int b=0,c=0;
        while(l!=k)
        {
            if(c==0)
            {
                while(s[r]!='1' && r<strlen(s))
                    r++;
                if(s[r]=='1')
                {
                    s[r]='2';
                    r++;
                    l--;
                }
                else c=1,r=0;
            }
            else
            {
                while(s[r]!=0 &&r<strlen(s))
                    r++;
                if(s[r]=='0')
                {
                    s[r]='2';
                    r++;
                    l--;
                }
            }

            if(l==k) break;
            //printf("%d\n",q);
            if(s[q]=='0')
            {
                s[q]='2';
                q++;
                l--;
                //printf("a\n");
            }
            else if(s[q]=='2')
            {

                while(s[q]!='1' && s[q]!='0')
                {
                    //printf("%c ",s[q]);
                    q++;
                }


                if(s[q]=='0')
                {
                    s[q]='2';
                    q++;
                    l--;
                }
                //printf("b\n");
            }
            else
            {

                if(b==0)
                {
                    while(s[p]!='0' && p>=0)
                        p--;
                    if(s[p]=='0')
                    {
                        s[p]='2';
                        p--;
                        l--;
                    }
                    else b=1,p=strlen(s);
                }
                else
                {
                    while(s[p]!=1 && p>=0)
                        p--;
                    if(s[p]=='1')
                    {
                        s[p]='2';
                        p--;
                        l--;
                    }
                }
                //printf("c\n");

            }


        //printf("%d\n",l);
        }
        for(i=0;i<strlen(s);i++)
            if(s[i]!='2')
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
