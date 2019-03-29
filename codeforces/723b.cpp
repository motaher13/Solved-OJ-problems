#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,mx=0,n,p,q,r,c,w=0;
    char s[500];
    scanf("%d",&l);
    scanf("%s",s);
    for(i=0; i<l; i++)
    {
        //printf("%d\n",i);
        if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
        {
            c=0;
            while((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
                c++,i++;
                if(c>mx) mx=c;
                i--;

        }
        else if(s[i]=='(')
        {
            while(s[i]!=')')
            {
                i++;
                if((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
                {
                    while((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90))
                           i++;
                        w++,i--;


                }
            }
        }
    }
    printf("%d %d\n",mx,w);
    return 0;

}
