#include<bits/stdc++.h>
using namespace std;
string s[1010];
int main()
{
    int i,j,k,l,m,n,p,q,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>s[i];

        if(b==0)
        {
            if(s[i][0]=='O'&&s[i][1]=='O'){
                s[i][0]='+';
                s[i][1]='+';
                b=1;}
            else if(s[i][3]=='O'&&s[i][4]=='O'){
                s[i][3]='+',s[i][4]='+';
                b=1;}
        }

    }
    if(b==1)
    {
        printf("YES\n");
        for(i=0;i<n;i++)
            cout<<s[i]<<endl;
    }
    else
        printf("NO\n");
    return 0;
}
