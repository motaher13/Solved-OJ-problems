#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        string s,ss,sss;
        cin>>s;
        int c=0;
        map<string,int>rev;
        for(i=1;i<=s.size();i++)
        {
            for(j=0;j<=s.size()-i;j++)
            {
                ss="";
                for(k=j;k<i+j;k++)
                {
                    ss=ss+s[k];
                }
                //cout<<ss<<endl;
                if(rev[ss]==1)
                {
                    rev[ss]=2;
                    c--;
                }
                else if(rev[ss]==2)
                    continue;
                else
                {
                    sss="";
                    for(k=i+j-1;k>=j;k--)
                        sss=sss+s[k];
                    if(sss!=ss) c++,rev[sss]=1;
                    else rev[sss]=2;
                    //cout<<ss<<endl;
                }
                //printf("%d\n",c);

            }
        }
        if(c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,count,j,l;
    char a[11];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%s",a);
        l=strlen(a);
        for(j=0; j<l/2; j++)
        {
            if(a[j]!=a[l-1-j])
                count=1;
        }
        if(count==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}


